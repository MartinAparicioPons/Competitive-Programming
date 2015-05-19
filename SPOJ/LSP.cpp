#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const int MAXN = 200200;

int P[MAXN];
char T[MAXN];

int main () {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int N, i, n, m, c, r;
	scanf("%d", &N);
	string S;
	while(N--){
		cin >> S;
		
		T[0] = '^';
		for(i = 0; i < 2*S.size(); i+=2){
			T[i] = '#';
			T[i+1] = S[i/2];
		}
		T[2*S.size()] = '#';
		T[2*S.size() + 1] = '$';
		
		n = 2*S.size() + 2; c = 0; r = 0;
		
		for(i = 1; i < n-1; i++){
			if(r > i) P[i] = min(r-i, P[2*c - i]);
			else      P[i] = 0;
			
			while(T[i - P[i] - 1] == T[i + P[i] + 1]) P[i]++;
			
			if(r < i + P[i]){
				c = i;
				r = i + P[i];
			}
		}
		m = -1;
		for(i = 1; i < n-1; i++) m = max(m, P[i]);
		printf("%d\n", m);
	}
	return 0;
}
