#include <bits/stdc++.h>
using namespace std;

#define toKey(s) (s[1]*256 + s[0])
#define lastC(x) (x/256)

string toString(int x){
	string s = "";
	s += (char)(x%256); s += (char)(x/256);
	return s;
}

const int MAXN = 400010;

int N[MAXN];
vector<int> E[MAXN], res;

void dfs(int a){
	int x;
	while(N[a] < E[a].size()){
		x = N[a]++;
		dfs(E[a][x]);
	}
	res.push_back(a);
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, a, b, c = 0, D[MAXN];
	string A[MAXN], in;
	set<int> v;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> in;
		a = toKey(in.substr(0, 2));
		b = toKey(in.substr(1, 2));
		E[a].push_back(b);
		D[a]++;
		D[b]--;
		v.insert(a);
		v.insert(b);
	}
	for(auto x : v){
		if(D[x] > 0){
			a = x;
			c += D[x];
		}
	}
	
	dfs(a);
	
	if(res.size() <= n || c >= 2){
		cout << "NO\n";
	} else {
		string R = toString(res[res.size()-1]);
		for(i = res.size()-2; i >= 0; i--){
			R += lastC(res[i]);
		}
		cout << "YES\n" << R << endl;
	}
}
