#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

#define F first
#define S second

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;
const static int MAXN = 1001000;
const static ll  MAX = 1000000000ll;

vll St;
int n;
pair<string, ll> I[MAXN];

bool op(int i){
	string o = I[i].F;
	int x;
	if(o == "NUM"){
		St.push_back(I[i].S);
		return true;
	}
	if(o == "POP"){
		if(St.size()) {
			St.pop_back();
			return true;
		}
		return false;
	}
	if(o == "INV"){
		if(St.size()){
			St[St.size()-1]*=-1;
			return true;
		}
		return false;
	}
	if(o == "DUP"){
		if(St.size()){
			St.push_back(St.back());
			return true;
		}
		return false;
	}
	if(o == "SWP"){
		if(St.size() > 1){
			swap(St[St.size()-1], St[St.size()-2]);
			return true;
		}
		return false;
	}
	if(o == "ADD"){
		if(St.size() > 1){
			x = St.back(); St.pop_back();
			if(abs(x + St.back()) > MAX) return false;
			St[St.size()-1] += x;
			return true;
		}
		return false;
	}
	if(o == "SUB"){
		if(St.size() > 1){
			x = St.back(); St.pop_back();
			if(abs(St.back() - x) > MAX) return false;
			St[St.size()-1] -= x;
			return true;
		}
		return false;
	}
	if(o == "MUL"){
		if(St.size() > 1){
			x = St.back(); St.pop_back();
			if(abs(St.back() * x) > MAX) return false;
			St[St.size()-1] *= x;
			return true;
		}
		return false;
	}
	if(o == "DIV"){
		if(St.size() > 1){
			x = St.back(); St.pop_back();
			if(x == 0 || abs(St.back() / x) > MAX) return false;
			St[St.size()-1] = St.back() / x;
			return true;
		}
		return false;
	}
	if(o == "MOD"){
		if(St.size() > 1){
			x = St.back(); St.pop_back();
			if(x == 0 || abs(St.back() % x) > MAX) return false;
			St[St.size()-1] = St.back()%x;
			return true;
		}
		return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k, i, a, j, m;
	while(true){
		i = 0;
		cin >> I[i].F;
		if(I[i].F == "QUIT") return 0;
		if(I[i].F == "NUM") cin >> I[i].S;
		if(I[i].F != "END") for(i++;; i++) {
			cin >> I[i].F;
			if(I[i].F == "NUM") cin >> I[i].S;
			if(I[i].F == "END") break;
		}
		m = i;
		
		cin >> k;
		while(k--){
			cin >> n;
			St.clear();
			St.push_back(n);
			bool ok = true;
			for(i = 0; i < m; i++){
				if(!op(i)) {
					ok = false;
					break;
				}
			}
			if(St.size() != 1 || !ok){
				cout << "ERROR\n";
			} else {
				cout << St[0] << "\n";
			}
		}
		cout << endl;
	}
	return 0;
}

