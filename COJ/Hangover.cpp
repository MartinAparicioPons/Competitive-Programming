#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <iterator>
using namespace std;


int i, r;
double c;
set<double> cartas;

int main () {

	c = 0.0;
	cartas.insert(c);
	for (i=2; i<277; i++) {
		c += (1.0/i);
		cartas.insert(c);
	}
	
	cin>>c;
	
	while (c != 0.0) {
		r = distance(cartas.begin(), cartas.lower_bound(c));
		printf("%d card(s)\n",r);
		cin>>c;
	}
	
	return 0;
}
