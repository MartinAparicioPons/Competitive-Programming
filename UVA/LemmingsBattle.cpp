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
#define prnl() printf("\n")
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
	int c, g, b, i, j, t, l, h, q, r[100050][2];
	priority_queue<int> sg, sb;
	scd(t);
	while(t--){
		scanf("%d %d %d", &c, &g, &b);
		for0(i, g){
			scd(j);
			sg.push(j);
		}
		for0(i, b){
			scd(j);
			sb.push(j);
		}
		while(!sg.empty() && !sb.empty()){
			q = 0;
			while(!sg.empty() && !sb.empty() && (q < c)){
				r[q][0] = sg.top(); 
				sg.pop();
				r[q][1] = sb.top(); 
				sb.pop();
				q++;
			}
			while(q--){
				l = r[q][0] - r[q][1];
				if(l < 0){
					sb.push(-l);
				} else if(l > 0) {
					sg.push(l);
				}
			}
		}
		if(sg.empty() && sb.empty()){
			printf("green and blue died\n");
		} else if(sg.empty()){
			printf("blue wins\n");
			while(!sb.empty()){
				prd(sb.top()); 
				sb.pop();
			}
		} else {
			printf("green wins\n");
			while(!sg.empty()){
				prd(sg.top()); 
				sg.pop();
			}
		}
		if(t != 0){
			prnl();
		}
	}
}








