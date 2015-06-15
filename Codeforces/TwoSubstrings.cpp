#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MAXN = 650100;

int i, n, j;
bool ok;

int main () {
	string S;
	cin >> S;
	n = S.size();
	for(i = 1; i < n; i++){
		if(S[i-1] == 'A' && S[i] == 'B'){
			i += 2;
			while(i < n){
				if(S[i-1] == 'B' && S[i] == 'A') {
					ok = true;
					break;
				}
				i++;
			}
			break;
		}
	}
	for(i = 1; i < n; i++){
		if(S[i-1] == 'B' && S[i] == 'A'){
			i += 2;
			while(i < n){
				if(S[i-1] == 'A' && S[i] == 'B') {
					ok = true;
					break;
				}
				i++;
			}
			break;
		}
	}
	cout << (ok?"YES\n":"NO\n");
}
