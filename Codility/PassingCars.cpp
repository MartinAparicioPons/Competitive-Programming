/*100% | 100%
 *time: 11'.
 */
#include <algorithm>
#include <vector>

int solution(vector<int> &A) {
    int n = A.size(), i, c=0, res=0;
    for(i = 0; i < n; i++){
        if (A[i] == 1) res += c;
        else c++;
        if(res > 1000000000) return -1;
    }
    return res;
}