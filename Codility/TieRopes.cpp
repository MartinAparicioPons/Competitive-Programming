#include <algorithm>

int solution(int K, vector<int> &A) {
    int i, n = A.size(), res = 0, act;
    for(i = 0; i < n;){
        act = 0;
        while(act < K && i < n){
            act += A[i];
            i++;
        }
        if(act >= K )res++;
    }
    return res;
}
