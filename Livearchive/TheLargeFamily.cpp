#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int n, R[3];		//R[0] : father, R[1] : childs, R[2] : goat.
	while(cin >> n, n != 0){
		R[0] = R[1] = R[2] = 0;
		n *= 2;
		R[0] = R[1] = n/7;
		n %= 7;
		if(n >= 5){
			R[1]++;
			n -= 5;
		}
		if(n >= 2){
			R[0]++;
			n -= 2;
		}
		R[2] = n;
		printf("%.01f %.01f %.01f %.01f\n", 
			R[2]*0.5, R[0]*0.5, R[0]*0.5, R[1]*0.5);
	}
}
 
