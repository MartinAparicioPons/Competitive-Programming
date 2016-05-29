#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DEB(x)
#define EL
#endif

#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef vector<string> vs;
const static int MX = 5010, PR = 29;

int n;
string S, Z;

int check(int m){
	pair<char, int> P[255], I[255];
	int l, r, mm = -1;
	l = r = 0;
	for(int i = 0; i < 255; i++) P[i] = {0,0};
	while(l <= r && r+m < n && (r-l)*2 < n){
		if((!P[S[m+r]].Y && !I[Z[r]].Y) || (P[S[m+r]].X == Z[r] && I[Z[r]].X == S[m+r])){			
			mm = max(r-l, mm);
			P[S[m+r]] = {Z[r], P[S[m+r]].Y+1};
			I[Z[r]] = {S[m+r], I[Z[r]].Y+1};
			r++;
		} else {
			if(P[S[m+l]].Y <= 1) P[S[m+l]] = {0,0};
			else P[S[m+l]].Y--;
			if(I[Z[l]].Y <= 1) I[Z[l]] = {0, 0};
			else I[Z[l]].Y--;
			l++;
		} 
		EL;
	}
	return mm+1;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	while(cin >> n){ 
		cin >> S >> Z;
		n += n;
		S += S;
		Z += Z;
		int m = -1;
		for(int i = 0; i*2 < n; i++){
			m = max(m, check(i));
		}
		cout << m << endl;
	}
	return 0;
}
