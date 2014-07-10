#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#define point pair<double, double>
#define Y first
#define sqr(x) (x)*(x)
#define X second

//Me tira error en el caso #6. No sé cuál es el problema, no encuentro el caso en el que no dé.
using namespace std;

int main(){
	int n, i;
	double min, d;
	cin >> n;
	point vec[n], p, aux;
	p.X = 0;
	p.Y = 0;
	for(i = 1; i <= n; i++){
		cin >> vec[i].X >> vec[i].Y;
		p.X += vec[i].X;
		p.Y += vec[i].Y;
	}
	cout << p.X << " " << p.Y << endl;
	min = sqrt(sqr(p.X) + sqr(p.Y));
	for(int j = 0; (min > 0) && (j <= n); j++){
		p.X -= vec[j].X;
		p.Y -= vec[j].Y;
		d = sqrt(sqr(p.X) + sqr(p.Y));
		if (d < min){
			min = d;
		}
		p.X += vec[j].X;
		p.Y += vec[j].Y;
	}
	printf("%.2lf\n", min);	
}