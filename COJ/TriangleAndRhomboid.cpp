#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;



int main(){
	int a, b, n;
	double res;
	cin >> n;
	while (n--){
		cin >> a >> b;
		res = (3.0*a*b)/16.0;
		printf("%.8lf\n", res);
	}
}
