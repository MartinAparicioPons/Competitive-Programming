/*50% | 0%
 *time: 23'.
 *
 *100% | 40%
 *time += 5'
 */
#include <algorithm>
#include <vector>

vector<int> solution(int N, vector<int> &A) {
    int m = A.size(), i, max=0;
    int r[100000];
    fill(r, r+(N*sizeof(int)), 0);
    for(i = 0; i < m; i++){
        if(A[i] == N+1){
            fill(r, r+(N*sizeof(int)), max);
        } else {
            r[A[i]-1]++;
            if(r[A[i]-1] > max)
                max = r[A[i]-1];
        }
    }
    return vector<int>(r, r + N );
}