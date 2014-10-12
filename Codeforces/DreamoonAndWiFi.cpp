#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
#define _MP make_pair
#define _MT(x, y, z) _MP(_MP(x, y), z)
#define _MTi(x, y, z) _MP(x, _MP(y, z))
#define SE second
#define FI first
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int r, n;
char a[11], b[11];

int f(char g[11]){
    int t = 0, i;   
    for0(i, n){
        if(g[i] == '+') t++;
        if(g[i] == '-') t--;
    }
    return t;
}

int dp(char G[11], int k){
    char g[11];
    strcpy(g, G);
    if(k <= 0){
        if(f(g) == r) return 1;
        else return 0;
    }
    int p = strchr(g, '?') - g, ret;
    g[p] = '+';
    ret = dp(g, k-1);
    g[p] = '-';
    ret += dp(g, k-1);
    return ret;
}


int main() {
    int i, o=0;
    r = 0;
    string A, B;
    cin >> A >> B;
    strcpy(a, A.c_str()); strcpy(b, B.c_str());
    n = strlen(a);
    r = f(a);
    for0(i, n){
        if(b[i] == '?') o++;
    }
    int res = dp(b, o), p2=1;
    for(i = 0; i < o; i++) p2*=2;
    printf("%.10lf\n", ((float)res/(float)p2));
}
