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
#define se second
#define fi first
#define _MT(x, y, z) _MP(_MP(x, y), z)
#define _MTi(x, y, z) _MP(x, _MP(y, z))
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define INF 1000000000
#define MAX 20000000000ll
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int n, d[3], DP[4005];

int dp (int n) {
    if (DP[n] != -5) return DP[n];
    if (n < 0) return -1;
    int ans = -1, aux = -1;
    if (n > d[0]) aux = max(dp(n-d[0]), aux);
    if (n > d[1]) aux = max(dp(n-d[1]), aux);
    if (n > d[2]) aux = max(dp(n-d[2]), aux);
    if (aux != -1) ans = aux+1;
    if (n == d[0]) ans = max(ans, 1);
    if (n == d[1]) ans = max(ans, 1);
    if (n == d[2]) ans = max(ans, 1);
    return DP[n] = ans;
}

int main() {
    int i, j;
    cin>>n>>d[0]>>d[1]>>d[2];
    for (i=0; i<=n; i++) DP[i] = -5;
    cout<<dp(n)<<endl;
    return 0;
}

