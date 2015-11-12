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
#define all(x) x.begin(), x.end()
#define hash losredondos

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 10010;

// Tuto: http://www.geeksforgeeks.org/given-a-number-find-next-smallest-palindrome-larger-than-this-number/

int main() {
	int t, i, j, n;
	cin >> t;
	string S;
	while(t--){
		cin >> S;
		bool ispal = true;
		n = S.size(); 
		for(i = n/2; i >= 0; i--) if(S[i] != S[n-i-1]) ispal = false;
		if(ispal){
			cout << S << endl;
			continue;
		}
		i = n/2 - 1; j = n/2 + n%2;
		while(i >= 0 && S[i] == S[j]) i--, j++;
		bool needsCheck = i < 0 || S[i] < S[j];
		while(i >= 0){
			S[j] = S[i];
			i--; j++;
		}
		if(needsCheck){
			int c = 1;
			i = n/2 - 1;
			if(n%2){
				S[n/2] = S[n/2] - '0' + c;
				c = S[n/2] / 10;
				S[n/2] = S[n/2]%10 + '0';
				j = n/2 + 1;
			} else j = n/2;
			while(i >= 0){
				S[i] = S[i] - '0' + c;
				c = S[i] / 10;
				S[i] = S[i] % 10 + '0';
				S[j] = S[i];
				i--; j++;
			}
		}
		cout << S << endl;
	}
}
