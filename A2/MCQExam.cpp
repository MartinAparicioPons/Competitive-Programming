#include <bits/stdc++.h>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main(){
	int hits[4]; // A, B, C, D.
	int T, i, result, maximum;
	vector<char> answers;
	string input;
	cin >> T;
	while(T--){
		for(i = 0; i < 4; i++)
			hits[i] = 0;
		cin >> input;
		for(i = 0; i < input.length(); i++){
			hits[input[i] - 'A']++;
		}
		maximum = -1;
		for(i = 0; i < 4; i++){
			if(hits[i] > maximum){
				answers.clear();
				answers.push_back(i+'A');
				maximum = hits[i];
			} else if(hits[i] == maximum){
				answers.push_back(i+'A');
			}
		}
		printf("%d ", hits[answers[0]-'A']);
		for(i = 0; i < answers.size(); i++){
			printf("%c", answers[i]);
		}
		printf("\n");
	}
}







