#include <bits/stdc++.h>
using namespace std;

int n, d, a;
string s;
vector<int> D, A;

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, t, r;
	cin >> t;
	getline(cin, s);
	while(t--){
		getline(cin, s);
		istringstream ss(s);
		r = 0;
		while (ss >> s){
			n = s.size();
			for(i = 3; i < n-5; i++){
				if(s[i] == 'd' && s[i+1] == 'o' && s[i+2] == 't') 
					D.push_back(i);
				if(s[i] == 'a' && s[i+1] == 't')
					A.push_back(i);
			}
			d = a = i = 0;
			while(i < n && a < A.size() && d < D.size()){
				while(a < A.size() && A[a] - i < 3)		a++;
				while(d < D.size() && D[d] - A[a] < 5)	d++;
				while(a < A.size() && D[d] - A[a] > 18)	a++;
				if(d < D.size() && a < A.size() && D[d] - A[a] >= 5){
					r++;
					i = D[d]+6;
					while(a < A.size() && A[a] < i) a++;
					while(d < D.size() && D[d] < A[a]) d++;
				}
			}
			D.clear(); A.clear();
		}
		printf("$%.02f\n", r*1.28);
	}
}
 
