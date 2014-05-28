#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <cmath>
#include <utility>
#include <iterator>
#include <cstdlib>
#include <set>
#define X first
#define Y second
#define sq(x) ((x)*(x))
using namespace std;

typedef int tint;

int main(){
	tint n, m, c, x, y, i;
	cin >> n >> m;
	cin >> x >> y >> c;
	pair<char, tint> C[c];
	for(i=0;i<c;i++){
		cin >> C[i].X >> C[i].Y;
	}
	for(i = c-1; i >= 0; i--){
		switch (C[i].X){
			case 'E': y-=C[i].Y; break;
			case 'W': y+=C[i].Y; break;
			case 'S': x-=C[i].Y; break;
			case 'N': x+=C[i].Y; break;
		}
	}
	printf("%d %d", x, y);
	
}
