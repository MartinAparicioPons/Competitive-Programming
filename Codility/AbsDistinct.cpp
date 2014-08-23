#include <algorithm>

int solution(vector<int> &A) {
    int i, n = A.size(), no = 0;
    if(n == 0) return 0;
    for(i = 0; i < n; i++){
        if(A[i] < 0) A[i] *= -1; 
    }
    sort(A.begin(), A.end());
    for(i = 1; i < n; i++){
            while(A[i-1] == A[i] && i < n){
                no++;
                i++;
            }
        
    }
    return n - no;
}
