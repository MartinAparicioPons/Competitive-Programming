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
 
bool palim(string &s){
    string r(s.rbegin(), s.rend());
    return s == r;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc, a, b, r;
    vector<int> A;
    string S;
    cin >> tc;
    while(tc--){
        cin >> a;
        A.clear();
        for(b = 2; b <= 16; b++){
            r = a;
            S="";
            while(r){
                S += (r%b);
                r /= b;
            }
            if(palim(S)){
                A.PB(b);
            }
        }
        if(!A.size()) cout << "-1\n";
        for(int i = 0; i < A.size(); i++){
            cout << A[i] << " \n"[i+1 == A.size()];
        }
    }
}
