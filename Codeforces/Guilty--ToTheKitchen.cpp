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

int main() {
    int n, v, i, j, a[30], b[30];
    scanf("%d %d", &n, &v);
    for (i=0; i<n; i++)
        scanf("%d", a+i);
    for (i=0; i<n; i++)
        scanf("%d", b+i);
    double mn = 1000000000.0;
    double aux;
    for (i=0; i<n; i++) {
        aux = (((double) b[i]) / ((double) a[i]));
        if (aux < mn) mn = aux;
    }
    double ans = 0.0;
    for (i=0; i<n; i++)
        ans += (mn*((double)a[i]));
    if (ans > ((double) v)) printf("%.6lf\n", (double) v);
    else printf("%.6lf\n", ans);
    return 0;
}
