/*100% | 33%
 *time: 50'.
 */
#include <algorithm>
#include <vector>
#include <cmath>
#define _LOG2(x) log(x) * 1.44269504088896340736

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    int n = S.size(), m = P.size(), i, j, vec[n], aux, rmq[n][1 << n];
    vector<int> res;
    for(i = 0; i < n; i++){
        if(S[i] == 'A') aux = 1;
        if(S[i] == 'C') aux = 2;
        if(S[i] == 'G') aux = 3;
        if(S[i] == 'T') aux = 4;
        vec[i] = aux;
    }
    for (i = 0; i < n; i++)
        rmq[i][0] = i;
    for (j = 1; 1 << j <= n; j++){
        for (i = 0; i + (1 << j) - 1 < n; i++)
            if (vec[rmq[i][j - 1]] < vec[rmq[i + (1 << (j - 1))][j - 1]])
                rmq[i][j] = rmq[i][j - 1];
            else
                rmq[i][j] = rmq[i + (1 << (j - 1))][j - 1];
    }
    
    for(i = 0; i < m; i++){
        aux = log2(Q[i]-P[i]+1);
        if(vec[rmq[P[i]][aux]] <= vec[rmq[Q[i] - (1 << aux) + 1][aux]])
            res.push_back(vec[rmq[P[i]][aux]]);
        else
            res.push_back(vec[rmq[Q[i] - (1 << aux) + 1][aux]]);
    }
    return res;
}