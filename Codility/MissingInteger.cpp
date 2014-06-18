/*100% | 100%
 *time: 15'.
 */
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>

int solution(vector<int> &A) {
    int n = A.size(), i, min = 1;
    set<int> s;
    for(i = 0; i < n; i++){
        if(A[i] < 1) continue;
        s.insert(A[i]);
    }
    set<int>::iterator it = s.begin();
    for(;it != s.end(); it++){
        if(min != *it){
            return min;
        } else {
            min++;
        }
    }
    return min;
}