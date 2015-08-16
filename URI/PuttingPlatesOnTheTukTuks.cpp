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
typedef unsigned long long ull; 
typedef long long ll;       typedef pair<int, int> ii; 
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 110;
 
int ipow(int b, int p){
    int r=1;
    while(p-->0){
        r*=b;
    }
    return r;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc, a, b;
    cin >> tc;
    while(tc--){
        cin >> a >> b;
        if(a+b <= 0) cout << 0 << endl;
        else cout << (ipow(26, a)*ipow(10, b)) << endl;
    }
}
