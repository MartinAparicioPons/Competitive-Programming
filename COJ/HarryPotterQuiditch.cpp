#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <iterator>
#include <cstdlib>
#include <set>
#define X first
#define Y second
#define sq(x) ((x)*(x))
using namespace std;

//WA


typedef unsigned long long tint;

struct Punto{
	tint x, y;
	Punto(){}
	Punto(tint x, tint y){x(x), y(y)}
};

double dist(Punto a, Punto b){
	return(sqrt(sq(a.x + b.x + 0.0)+sq(a.y + b.y + 0.0)));
}


Punto P[100000];

int main () {
	double max = 0;
	tint n, i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> P[i].x >> P[i].y;
		
	}
}
