#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <locale>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

int main(){
	queue<int> q;
	stack<int> s;
	priority_queue<int, vector<int>, greater<int> > p;
	int t, a, i, b;
	string st;
	stringstream ss;
	cin >> t;
	getline(cin, st);
	while(t--){
		getline(cin, st);
		ss.str("");
		ss.clear();
		ss.str(st);
		st = "";
		while(ss >> st){
			if(st[0] == '*'){
				a = q.front(); q.pop();
				b = q.front(); q.pop();
				q.push(a*b);
				a = s.top(); s.pop();
				b = s.top(); s.pop();
				s.push(a*b);
				a = p.top(); p.pop();
				b = p.top(); p.pop();
				p.push(a*b);
			} else if(st[0] == '-'){
				a = q.front(); q.pop();
				b = q.front(); q.pop();
				q.push(b-a);
				a = s.top(); s.pop();
				b = s.top(); s.pop();
				s.push(b-a);
				a = p.top(); p.pop();
				b = p.top(); p.pop();
				p.push(b-a);
			} else if(st[0] == '+'){
				a = q.front(); q.pop();
				b = q.front(); q.pop();
				q.push(a+b);
				a = s.top(); s.pop();
				b = s.top(); s.pop();
				s.push(a+b);
				a = p.top(); p.pop();
				b = p.top(); p.pop();
				p.push(a+b);
			} else {
				a = atoi(st.c_str());
				q.push(a);
				s.push(a);
				p.push(a);
			}
			st="";
		}
		cout << s.top() << " " << q.front() << " " << p.top() << endl;
		s.pop(); q.pop(); p.pop();
	}
}








