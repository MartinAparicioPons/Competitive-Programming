#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

#define F first
#define G second

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;
const static int MAXN = 55000;
string WW[400] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", 
	"Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti",
	"V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As",
	"Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru",
	"Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs",
	"Ba", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl",
	"Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Rf", "Db", "Sg",
	"Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Fl", "Lv", "La", "Ce", "Pr",
	"Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb",
	"Lu", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf",
	"Es", "Fm", "Md", "No", "Lr"};
string S;
set<string> W;

int DP[MAXN], n;

string toLowerCase(const string S){
	string R = "";
	R = R + (char) tolower(S[0]);
	if(S.size() > 1) R = R + (char) tolower(S[1]);
	return R;
}

bool dp(int i){
	if(i >= n) return true;
	if(DP[i] == -1){
		DP[i] = 0;
		if(W.count(S.substr(i, 1)) && dp(i+1)) DP[i] = dp(i+1);
		if(!DP[i] && i+1 < n && W.count(S.substr(i, 2)) && dp(i+2)) DP[i] = dp(i+2);
	}
	return DP[i];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for(int i = 0; WW[i] != "Lr"; i++){
		W.insert(toLowerCase(WW[i]));
	}
	W.insert("lr");
	while(T--){
		cin >> S;
		n = S.size();
		memset(DP, ~0, sizeof DP);
		if(dp(0)){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
