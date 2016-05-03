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
typedef long double ld;     typedef unsigned long long ull; 
typedef long long ll;       typedef pair<int, int> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef vector<string> vs;
typedef string string;      typedef set<int> si;
const static int MAXN = 50000104;

int C[MAXN];

int main() {
    int n, w;
    scanf("%d", &n);
    memset(C, 0, sizeof C);
    for(int i = 0; i < n; i++) {
        scanf("%d", &w);
        C[w]++;
    }
    for(int i = 0; i < MAXN-100; i++){
		C[i+1] += (C[i] - C[i]%2) / 2;
		C[i] %= 2;
	}
    ll q = 0;
    for(int i = 0; i < MAXN; i++) {
		q += C[i];
	}
    cout << q << endl;
}


