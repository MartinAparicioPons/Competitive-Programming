/*87% | 62%
 *time: 20'.
 */
#include <algorithm>
#include <vector>
#include <set>
int solution(const vector<int> &A) {
    int n = A.size(), i, j, count = 0;
    for (i = 0; i < n; i++){
        for(j = i+1; (j <= (A[i] + i)), j < n; j++){
            if((A[i] + A[j]) >= (j-i))
                count++;
        }
    }
    return count;
}