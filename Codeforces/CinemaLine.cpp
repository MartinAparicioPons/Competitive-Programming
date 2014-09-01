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

int n, bill25, bill50, t;

int main() {
    int i, j;
    
    scanf("%d", &n);
    bill25 = bill50 = 0;
    for (i=0; i<n; i++) {
        scanf("%d", &t);
        if (t == 25) bill25++;
        else if (t == 50) {
            if (bill25 > 0) {
                bill50++;
                bill25--;
            } else break;
        } else if (t == 100) {
            if (bill50 > 0) {
                bill50--;
                t = 0;
            } else t = 2;
            if (bill25 > t) bill25 -= (t+1);
            else break;
        }
    }
    if (i == n) printf("YES\n");
    else printf("NO\n");
}





