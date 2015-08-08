#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

#define F first
#define G second
#define PB push_back
#define LVOW(x) v.find(x) != string::npos
#define UVOW(x) V.find(x) != string::npos
#define LCON(x) c.find(x) != string::npos
#define UCON(x) C.find(x) != string::npos

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 550;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string v = "aiyeou", c = "bkxznhdcwgpvjqtsrlmf",
		   V = "AIYEOU", C = "BKXZNHDCWGPVJQTSRLMF", L;
	while(getline(cin, L)){
		int n = L.size(), i, j;
		for(i = 0; i < n; i++){
			if(LVOW(L[i])){
				j = 0;
				while(v[j] != L[i])j++;
				j = (j+3)%(v.size());
				L[i] = v[j];
			} else if(UVOW(L[i])){
				j = 0;
				while(V[j] != L[i])j++;
				j = (j+3)%(V.size());
				L[i] = V[j];
			} else if(LCON(L[i])){
				j = 0;
				while(c[j] != L[i])j++;
				j = (j+10)%(c.size());
				L[i] = c[j];
			} else if(UCON(L[i])){
				j = 0;
				while(C[j] != L[i])j++;
				j = (j+10)%(C.size());
				L[i] = C[j];
			}
		}
		cout << L << endl;
	}
}
