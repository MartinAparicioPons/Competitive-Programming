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
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 1020;

int main() {
	int A[3], B[3], X[3];
	while(cin >> A[0], A[0]){
		cin >> A[1] >> A[2] >> X[0] >> X[1];
		sort(A, A+3);
		bool U[55] = {false};
		U[A[0]] = U[A[1]] = U[A[2]] = U[X[0]] = U[X[1]] = true;
		int r = -1;
		for(int c = 1; c <= 52; c++) if(!U[c]){
			B[0] = X[0]; B[1] = X[1]; B[2] = c;
			sort(B, B+3);
			int b = 0, d = 0;
			do {
				d++;
				int a = 0;
				for(int i = 0; i < 3; i++) a += A[i] < B[i];
				if(a >= 2) b++;
			} while(next_permutation(B, B+3));
			if(b == d){
				r = c;
				break;
			}
		}
		cout << r << endl;
	}
}
