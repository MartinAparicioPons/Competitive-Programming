#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl
 
#define X first
#define Y second
#define PB push_back
#define MP make_pair
 
using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;       typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 200100;
 
int main() {
        //ios_base::sync_with_stdio(0); cin.tie(0);
        ll n, m, A[MAXN];
        int i;
        while(cin >> n >> m, n != -1){
                for(i = 0; i < n; i++) cin >> A[i];
                ll r = 0;
                for(i = 0; i < n; i++){
                        r += (n-i)*A[i]*m;
                }
                cout << r << endl;
        }
}
