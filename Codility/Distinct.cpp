/*100% | 100%
 *time: 10'.
 */ 
#include <algorithm>
#include <vector>
#include <set>
int solution(const vector<int> &A) {
    int n = A.size(), i, j = 0;
    set<int> c;
    for(i = 0; i < n; i++){
        if(c.find(A[i]) == c.end()){
            j++;
            c.insert(A[i]);
        }
    }
    return j;
}