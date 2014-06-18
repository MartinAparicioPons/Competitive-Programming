/*100% | 100%
 *time: 9'.
 */
#include <algorithm>
#include <vector>
#include <set>
int solution(const vector<int> &A) {
    int n = A.size(), i, j, p=0;
    set<int> s, z;
    for(i = 0; i < n; i++){
        s.insert(A[i]);
    }
    j = s.size();
    for(i = 0; i < n; i++){
        if(z.count(A[i]) == 0){
            z.insert(A[i]);
            p++;
            if(p == j){
                return i;
            }
        }
        
    }
    return n;
}