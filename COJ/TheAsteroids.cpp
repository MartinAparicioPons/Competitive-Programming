#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>
#define pi 3.141592653589793
#define X first
#define Y second
#define point pair<double, double>
using namespace std;

struct circle{
	point c;
	int r;
};

double sqr(double x){
	return x*x;
}

double dist(point a, point b){
	return (sqrt(sqr(a.X - b.X) + sqr(a.Y - b.Y)));
}

int main(){
	int n, maxi;
	point s;
	double max, aux;
	cin >> n;
	circle a;
	while(n != 0){
		max = 99999;
		cin >> s.X >> s.Y;
		for(int i = 1; i <= n; i++){
			cin >> a.c.X >> a.c.Y >> a.r;
			aux = (dist(s, a.c) - a.r + 0.0);
			if(max >= aux){
				max = aux;
				maxi = i;
			}
//			printf("\t%lf\n", aux);
		}
		printf("%d\n", maxi);
		cin >> n;
	}
}
