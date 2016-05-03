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


using namespace std;
typedef long double ld; 	typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string;		typedef set<int> si;
const static int MAXN = 100001;


bool cmp(ii a, ii b){
	return a.X - a.Y > b.X - b.Y;
}

int main(){
	int n, i, g, j, a, b, p;
	while(cin >> n >> g){
		p = 0;
		vii V;
		for(i = 0; i < n; i++){
			cin >> a >> b;
			if(a <= b) V.PB({a, b});
			else p += 3;
		}
		sort(all(V), cmp);
		for(auto x : V){
			int d = x.Y - x.X;
			if(g < d) break;
			g -= d;
			if(!g) p++;
			else {
				g--;
				p+=3;
			}
		}
		cout << p << endl;
	}
	
}
