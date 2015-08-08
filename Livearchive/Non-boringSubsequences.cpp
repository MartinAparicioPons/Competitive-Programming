#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

#define F first
#define G second

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;
const static int MAXN = 201000;


/**
 * A: input array.
 * N[i][0]: previous index of A, such that A[i] = A[N[i][0]].
 * N[i][1]: next index of...
 * 		    If no such element, -1 instead.
 * n: quantity of elements.
 */
int A[MAXN], N[MAXN][2], n;

bool dc(int i, int j){
	if(i >= j) return true;
	int l, r;
	for(l = i, r = j; l <= r; l++, r--) {
		if(N[l][0] < i && N[l][1] > j){
			return dc(i, l-1) && dc(l+1, j);
		}
		if(l < r && N[r][0] < i && N[r][1] > j){
			return dc(i, r-1) && dc(r+1, j);
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, T;
	cin >> T;
	while(T--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> A[i];
		}
		unordered_map<int, int> M;
		for(i = 0; i < n; i++){
			if(M.count(A[i])){
				N[i][0] = M[A[i]];
			} else {
				N[i][0] = -1;
			}
			M[A[i]] = i;
		}
		M.clear();
		for(i = n-1; i >= 0; i--){
			if(M.count(A[i])){
				N[i][1] = M[A[i]];
			} else {
				N[i][1] = MAXN-1;
			}
			M[A[i]] = i;
		}
		if(dc(0, n-1)){
			cout << "non-boring\n";
		} else {
			cout << "boring\n";
		}
	}
}
