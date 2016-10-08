#ifndef THE_KNIGHTS_OF_THE_HASH_TABLE
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#ifdef ONLINE_JUDGE
    #define DB(x)
    #define DBL(x)
    #define EL
    #define endl "\n"
#else
    #define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
    #define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
    #define EL cerr << endl;
#endif
#define FAST_AS_HELL ios_base::sync_with_stdio(0); cin.tie(0);
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define SQ(x) ((x)*(x))
 
#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))
 
using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>,	 rb_tree_tag, tree_order_statistics_node_update> ordered_set; //insert, find_by_order, order_of_key, erase
using namespace std;        typedef string string;
typedef double ld;      	typedef unsigned long long ull;
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
#endif

const int MX = 5000;

vi lps(string &P){
	int l = 0, i = 1, m = P.size();
	vi LPS(m+1);
	LPS[0] = 0;
	while(i < m){
		if(P[i] == P[l]) LPS[i++] = ++l;
		else if(l) l = LPS[l-1];
		else LPS[i++] = 0;
	}
	return LPS;
}

vi kmp(string &P, string &S){
	int m = P.size(), n = S.size();
	vi LPS = lps(P);
	int i = 0, j = 0;
	vi K;
	while(i < n) {
		if(P[j] == S[i]) j++, i++;
		if(j == m) {
			K.PB(i - j);
			j = LPS[j-1];
		} else if(i < n && P[j] != S[i])
			if(j) j = LPS[j-1];
			else i++;
	}
	return K;
}

#define endl '\n'
int main() {
	FAST_AS_HELL
	string S, P;
	int p, f = 1;
	while(cin >> p >> P >> S){
		if(f) f = 0;
		else cout << endl;
		
		vi K = kmp(P, S);
		for(int x : K){
			cout << x << endl;
		}
	}
}

