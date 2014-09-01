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
#define for1(i,n) for(i = 1; i <= n; i++)
#define INF 1000000000
#define MAX 20000000000ll
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<pair<int,int>, int> iii;
typedef long long ll;

iii p[130];     //fi.fi = l, fi.se = r, se = ID
int n, i, j, a[130];
bool us[10000009];

struct cmp{
    bool operator() (const iii a, const iii b){
    return a.fi.se < b.fi.se || (a.fi.se == b.fi.se && a.fi.fi < b.fi.fi);
    }
};

int main() {
    memset(us, false, sizeof us);
    scanf("%d", &n);
    for1(i, n){
        scanf("%d %d", &p[i].fi.fi, &p[i].fi.se);
        p[i].se = i;
    }
    sort(p+1, p+n+1, cmp());
    for(i = 1; i <= n; i++){
        j = p[i].fi.fi;
        while(us[j]) j++;
        us[j] = true;
        a[p[i].se] = j;
    }
    for1(i, n){
        printf("%d ", a[i]);
    }
    printf("\n");
}




