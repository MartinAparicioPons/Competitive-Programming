#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1010, ITE = 50;
 
int A[MAXN][MAXN], B[MAXN][MAXN], C[MAXN][MAXN], R[MAXN], AR[MAXN], BR[MAXN];
int main(){
        int n, i, j, k;
        bool ok;
        while(scanf("%d", &n), n != 0){
                for(i = 0; i < n; i++) for(j = 0; j < n; j++) scanf("%d", &A[i][j]);
                for(i = 0; i < n; i++) for(j = 0; j < n; j++) scanf("%d", &B[i][j]);
                for(k = 0; k < ITE; k++){
                        for(i = 0; i < n; i++) R[i] = rand() % 200 - 100;
                        for(i = 0; i < n; i++){
                                AR[i] = 0;
                                for(j = 0; j < n; j++){
                                        AR[i] += R[j]*A[i][j];
                                }
                        }
                        for(i = 0; i < n; i++){
                                BR[i] = 0;
                                for(j = 0; j < n; j++){
                                        BR[i] += R[j]*B[i][j];
                                }
                        }
                        for(i = 0; i < n; i++){
                                R[i] = 0;
                                for(j = 0; j < n; j++){
                                        R[i] += AR[j]*A[i][j];
                                }
                        }
                        ok = true;
                        for(i = 0; i < n; i++){
                                if(R[i] != BR[i]) ok = false;
                        }
                        if(!ok) break;
                }
                printf("%s\n", (ok)?"YES":"NO");
        }
}
