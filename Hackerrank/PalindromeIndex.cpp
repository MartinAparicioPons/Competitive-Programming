#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(xx) xx.begin(), xx.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef pair<ll, ll> pll;
const static int MAXN = 1000010, PR = 29;

bool isPalim(string &S, int x){
	int i = 0, j = S.size() - 1;
	while(i < j){
		if(i == x) i++;
		else if(j == x) j--;
		if(S[i] != S[j]) return false;
		i++; j--;
	}
	return true;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	string S;
	int n, r, i, t;
	cin >> t;
	while(t--){
		r = -1;
		cin >> S;
		n = S.size();
		for(i = 0; i < n; i++){
			if(S[i] != S[n-i-1]){
				if(isPalim(S, i)) r = i;
				else r = n-i-1;
				break;
			}
		}
		cout << r << endl;
	}
}
