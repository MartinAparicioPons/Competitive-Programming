#include <algorithm>
#include <vector>
/*100% | 100%
 *time: 10'.
 */
int solution(vector<int> &A) {
    int n = A.size(), i;
    bool m[100010] = {false};
    for(i=0; i<n; i++){
        if(A[i]>n) return 0;
        if(m[A[i]]) return 0;
        m[A[i]] = true;
    }
    return 1;
}