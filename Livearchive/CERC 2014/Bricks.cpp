#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100040;

int A[MAXN];
char B[MAXN];

int main(){
	ios_base::sync_with_stdio(0);
	ll x, b, w, ab, aw, r;
	string s;
	int i, T, n;
	cin >> T;
	while(T--){
		cin >> n;
		b = w = ab = aw = r = 0ll; 
		for(i = 0; i < n; i++){
			cin >> A[i] >> B[i];
			if(B[i] == 'B') b += A[i];
			else 			w += A[i];
			
		}
		if(!b || !w){
			cout << b+w << endl;
			continue;
		}
		x = __gcd(b, w);
		b /= x;
		w /= x;
		
		for(i = 0; i < n; i++){
			if(B[i] == 'B'){
				if(aw > 0ll && (aw % w == 0ll)){
					x = b * (aw / w);
					if(ab < x && x <= A[i] + ab){
						r++;
						ab -= x;
						aw = 0ll;
					}
				}
				ab += A[i];
			} else {
				if(ab > 0ll && (ab % b == 0ll)){
					x = w * (ab / b);
					if(aw < x && x <= A[i] + aw){
						r++;
						aw -= x;
						ab = 0ll;
					}
				}
				aw += A[i];
			}
		}
		cout << r << endl;
	}
}
/*
3
3
1 B
3 W
2 B
4
3 W
3 B
9 W
1 B
2
2 W
3 W

*/
