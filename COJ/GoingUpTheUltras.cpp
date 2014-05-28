#include <stdio.h>
#include <stack>
using namespace std;
#define MAX_SIZE 100000
#define LOG_MAX_SIZE 18
#define MIN_HEIGHT 150000
#define IMPOSSIBLE_HEIGHT 1000001
#define NOT_FOUND -1
 
/*
    We use a segment tree to solve this problem 
    in order to achieve O(log N) time complexity
    to retrieve the mountain with lowest height 
    in any interval (a,b) (RMQ)
    
    We perform the previous query at most N times, therefore 
    the overall time complexity is O(N log N)
*/
 
/*
    mountains indicates the amount of mountains in the input
*/
int mountains;
/*
    peakCount indicates the amount of peaks found in the input
*/
int peakCount = 0;
/*
    height[i] indicates the height of the i-th mountain
*/
int height[MAX_SIZE];
/*
    peaks[i] indicates the index of the i-th peak
    found in the input.
*/
int peaks[MAX_SIZE]; 
 
/* 
    nextPeak[i] indicates the index of the peak
    closest to the right of peaks[i] that has a height
    strictly higher than peaks[i]
*/
int nextPeak[MAX_SIZE]; 
/* 
    prevPeak[i] indicates the index of the peak
    closest to the left of peaks[i] that has a height
    strictly higher than peaks[i]
*/
int prevPeak[MAX_SIZE];
/*
    segment tree used to find the minimum mountain 
    height between two peaks (a,b) in O(log(mountains))
*/
int tree[MAX_SIZE * LOG_MAX_SIZE]; 
 
int max(int a, int b){
    return a > b ? a : b;
}
 
int min(int a, int b){
    return a < b ? a : b;
}
 
//index of the left child of node in the segment tree
int left(int node){
    return 2*node + 1;
}
 
//index of the right child of node in the segment tree
int right(int node){
    return 2*node + 2;
}
 
//creates the segment tree for the interval (minIdx, maxIdx) inclusive
//with current root index (current).
void createSegmentTree(int current, int minIdx, int maxIdx){
    if(minIdx == maxIdx){
        tree[current] = height[maxIdx];
    }
    else{
        int leftChild = left(current);
        int rightChild = right(current);
        int mid = (minIdx + maxIdx) / 2;
        createSegmentTree(leftChild, minIdx, mid);
        createSegmentTree(rightChild, mid+1, maxIdx);
        tree[current] = min(tree[leftChild], tree[rightChild]);
    }
}
 
void createSegmentTree(){
    createSegmentTree(0, 0, mountains-1);
}
 
//lowest height in range (goalLeft, goalRight) inclusive
int query(int currentArrayIndex, int currentLeft, int currentRight, 
                                 int goalLeft,    int goalRight){
    if(currentLeft == goalLeft && currentRight == goalRight){
        return tree[currentArrayIndex];
    }
    else{
        int mid = (currentLeft + currentRight) / 2;
        int leftResult =  IMPOSSIBLE_HEIGHT;
        int rightResult = IMPOSSIBLE_HEIGHT;
        if(goalLeft <= mid && goalLeft >= currentLeft){
            //find minimum height on range (goalLeft, min(goalRight, mid))
            leftResult = query(left(currentArrayIndex), currentLeft, mid, 
                               goalLeft, min(goalRight, mid));
        }
        if(goalRight > mid && goalRight <= currentRight){
            //find minimum height on range (max(goalLeft, 1+mid), goalRight)
            rightResult = query(right(currentArrayIndex), mid+1, currentRight, 
                                max(goalLeft, 1+mid), goalRight);
        }
        //return the minimum height 
        return min(leftResult, rightResult);
    }
}
 
//query(i,j) = lowest height between mountain i and mountain j (inclusive)
int query(int i, int j){
    return query(0, 0, mountains-1, i, j);
}
 
//find prevPeak[i] for every i
void findPreviousHigherPeaks(){
    stack<int> higherMountains;
    for(int i = 0; i < peakCount; ++i){
        while(!higherMountains.empty() 
            && height[peaks[higherMountains.top()]] <= height[peaks[i]]){
            higherMountains.pop();
        }
        prevPeak[i] = NOT_FOUND;
        if(!higherMountains.empty()){
            prevPeak[i] = higherMountains.top();
        }
        higherMountains.push(i);
    }
}
 
//find nextPeak[i] for every i. 
void findNextHigherPeaks(){
    stack<int> higherMountains;
    for(int i = peakCount-1; i >= 0; --i){
        while(!higherMountains.empty() 
            && height[peaks[higherMountains.top()]] <= height[peaks[i]]){
            higherMountains.pop();
        }
        nextPeak[i] = NOT_FOUND;
        if(!higherMountains.empty()){
            nextPeak[i] = higherMountains.top();
        }
        higherMountains.push(i);
    }
}
 
void solveCase(){
    peakCount = 0;
    for(int i = 0; i < mountains; ++i){
        cin >> height[i];
    }
 
    //find the peaks in the input O(N)
    for(int i = 0; i < mountains-2; ++i){
        if(height[i+1] > height[i] && height[i+1] > height[i+2]){
            peaks[peakCount++] = i+1;
        }
    }
 
    // nextPeak(i) = index of closest next peak after i, higher than i
    // prevPeak(i) = index of closest previous peak before i, higher than i
    // find nextPeak(i) and prevPeak(i) for every peak i  O(N)
    findNextHigherPeaks();
    findPreviousHigherPeaks();
 
 
    //build segment tree O(N log(N))
    //query(i,j) = lowest height between mountain i and mountain j (inclusive)
    createSegmentTree();
 
    //find ultras O(N log N)
    bool isUltra = false;
    bool isFirstUltra = true;
    for(int i = 0; i < peakCount; ++i){
        int highestOfLowestHeights = NOT_FOUND;
        int leftPeak = prevPeak[i];
        int rightPeak = nextPeak[i];
        if(leftPeak >= 0){
            //find minimum height between peaks[leftPeak]+1 and peaks[i] - 1
            highestOfLowestHeights = max(highestOfLowestHeights, query(peaks[leftPeak]+1, peaks[i] - 1));
        }
        if(rightPeak >= 0){
            //find minimum height between peaks[i]+1 and peaks[rightPeak]-1
            highestOfLowestHeights = max(highestOfLowestHeights, query(peaks[i]+1, peaks[rightPeak]-1));
        }
        if(highestOfLowestHeights == NOT_FOUND){
            //there is no lower mountain on the way to any higher peak
            //Check if peak i is prominent by its height.
            isUltra = height[peaks[i]] >= MIN_HEIGHT;
        }
        else{
            //there is a lower mountain in the path to a higher peak
            //check prominence with the highest of the lowest mountains
            //from all possible paths
            isUltra = height[peaks[i]] - highestOfLowestHeights >= MIN_HEIGHT;
        }
        if(isUltra){
            if(!isFirstUltra){
                printf(" "); //avoid presentation error from the judge
            }
            isFirstUltra = false;
            printf("%d", peaks[i]+1);
        }
    }
    printf("\n");
}
 
int main(){
    for(;cin >> mountains;){
		solveCase();    
	}
    return 0;
}