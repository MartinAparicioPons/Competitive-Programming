#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;

#define F first
#define G second
#define PB push_back

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 10010, MAXR = 531461;

int A[MAXN], n, r;
pair<int, int> R[MAXR];

void A_swap(int l, int r){
	int d = (1 + r - l)/2;
	for(int i = l; i < l + d; i++){
		swap(A[i], A[i+d]);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc, i, j, k;
	cin >> tc;
	while(tc--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> A[i];
			A[i]--;
		}
		
		r = 0;
		for(i = 0; i < n; i++){
			if(A[i] == i) continue;
			int mi = i;
			while(A[mi] != i) mi++;
			if(mi <= (i+n)/2){
				k = mi - i;
				A_swap(i, i+k+k-1);
				R[r] = {i, i+k+k-1};
				r++;
			} else {
				if((i+n)%2 == 0){
					A_swap(i, n-1);
					R[r] = {i, n-1};
				} else {
					A_swap(i+1, n-1);
					R[r] = {i+1, n-1};
				}
				r++;
				mi = i;
				while(A[mi] != i) mi++;
				k = mi - i;
				A_swap(i, i+k+k-1);
				R[r] = {i, i+k+k-1};
				r++;
			}
		}
		cout << r << endl;
		for(i = 0; i < r; i++){
			cout << (R[i].first+1) << " " << (R[i].second+1) << endl;
		}
	}
}
