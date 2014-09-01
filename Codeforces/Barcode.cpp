#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <locale>
#define _MP make_pair
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define INF 10000000000
#define MAX 20000000000ll
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int n, m, x, y;
ll DP[1005][2][1005], column[2][1005];
char row[1005];

ll dp (int idx, int color, int cant) {
    if (idx == m) {
        if (cant >= x) return 0;
        else return MAX;
    }
    if (DP[idx][color][cant] != -1) return DP[idx][color][cant];
    if (cant == y) {
        return DP[idx][color][cant] = dp(idx+1, (color+1)%2, 1) + (n-column[(color+1)%2][idx]);
    } else if (cant < x) {
        return DP[idx][color][cant] = dp(idx+1, color, cant+1) + (n-column[color][idx]);
    } else {
        return DP[idx][color][cant] = min(dp(idx+1, (color+1)%2, 1) + (n-column[(color+1)%2][idx]), dp(idx+1, color, cant+1) + (n-column[color][idx]));
    }
}

int main() {
    int i, j;
    
    scanf("%d %d %d %d", &n, &m, &x, &y);
    memset(column, 0, sizeof column);
    for (i=0; i<n; i++) {
        scanf("%s", row);
        for (j=0; j<m; j++)
            if (row[j] == '#') column[0][j]++;
            else column[1][j]++;
    }
    memset(DP, -1, sizeof DP);
    cout<<min(dp(0, 0, 0), dp(0, 1, 0))<<endl;
    
}
