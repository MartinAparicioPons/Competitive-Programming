#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <cmath>
#include <utility>
#include <set>
#include <stdio.h>
#define sq(x) ((x)*(x))
using namespace std;


int main(){
	int n, k, x, y, xx, yy;
	double r;
	while(cin >> n >> k){
		r = 0;
		cin >> x >> y;
		while (-1 +(n--)){
			cin >> xx >> yy;
			r += sqrt(sq(x - xx) + sq(y - yy));
			x = xx;
			y = yy;
		}
		r = k*(r/50.0);
		printf("%.5lf\n", r);
	}
}