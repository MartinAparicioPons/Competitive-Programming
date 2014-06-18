/*100% | 100%
 *time: 9'.
 */
#include <algorithm>
#include <vector>
#include <set>

int solution(int X, vector<int> &A) {
    int n = A.size(), i;
    set<int> s;
    for(i = 0; i < n; i++){
        s.insert(A[i]);
        if(s.size() == X) return i;
    }
    return -1;
}