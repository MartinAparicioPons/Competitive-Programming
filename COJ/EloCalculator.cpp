#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	string S, p;
	int i, n, ra, k;
	double w, we, f, med=0;
	cin >> S >> n;
	cout <<"Tournament: " << S << "\nNumber of players: " << n << "\nNew ratings:\n";
	for(i = 0; i < n; i++){
		cin >> p >> ra >> w >> we >> k;
		f = ra + k*(w-we);
		med += ra+0.0;
		cout << p;
		printf(" %.0lf\n", f);
	}
	med /= n+0.0;
	printf("Media Elo: %.0lf\n", med);
}