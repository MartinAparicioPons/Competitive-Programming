#include <bits/stdc++.h>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main(){
    int n, i, k, j, ad, mov[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    char a;
    bool m[105][105] = {false};
    cin >> n;
    for1(i, n){
        getchar();
        for1(j, n){
            a = getchar();
            m[i][j] = (a == 'o');
        }
    }
    for1(i, n){
        for1(j, n){
            ad = 0;
            for0(k, 4){
                if(m[mov[k][0]+i][mov[k][1]+j]) ad++;
            }
            if(ad%2 == 1){
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}


