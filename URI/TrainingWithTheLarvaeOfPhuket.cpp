#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl
 
#define X first
#define Y second
#define PB push_back
#define EB emplace_back
 
using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;       typedef pair<int, int> ii; 
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 2020;
const static ld eps = 1e-9;
const static ld inf = 1e11;
 
ld area(ld a, ld b, ld c){
    ld p = (a+b+c)/2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
 
bool valid(ld a, ld b, ld c){
    return a+b > c && a+c > b && c+b > a;
}
 
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int tc, i, n, j, k, l, r;
    ld A[MAXN], mi;
    ld* c;
    cin >> tc;
    while(tc--){
        cin >> n;
        for(i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A, A+n);
        mi = inf;
        for(i = 0; i < n-2; i++){
            for(j = i+1; j < n-1; j++){
                c = (lower_bound(A+j+1, A+n, A[i]+A[j])-1);
                if(valid(A[i], A[j], A[j+1])){
                    mi = min(area(A[i], A[j], A[j+1]), mi);
                }
                if(valid(A[i], A[j], *c) && c != A+j){
                    mi = min(area(A[i], A[j], *c), mi);
                }
            }
        }
        if(mi != inf)printf("%.2Lf\n", mi);
        else printf("-1\n");
    }
}
