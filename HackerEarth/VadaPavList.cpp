#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
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
const static int MX = 1000010, PR = 29;

char S[MX][6], str[6];
ull H[MX], b;
map<ull, int> P;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s", str);
		int x = strlen(str);
		for(int j = x; j < 5; j++){
			str[j] = 'a' - 1;
		}
		for(int j = 0; j < x; j++){
			S[i][j] = str[j];
		}
		S[i][x] = '\0';
		H[i] = 0; b = 1;
		for(int j = 4; j >= 0; j--){
			H[i] += (str[j] - 'a' + 2)*b;
			b *= PR;
		}
		P[H[i]] = i;
	}
	printf("%d\n", P.size());
	for(auto x : P){
		for(int i = 0; i < 5; i++){
			if(S[x.Y][i] < 'a') break;
			putchar(S[x.Y][i]);
		}
		putchar('\n');
	}
	return 0;
}



