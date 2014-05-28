#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#define sq(x) ((x)*(x))
#define res(a, b) (a == b)?1:(a-b)
using namespace std;

//WA

int ax, ay, bx, by, nx, ny, mx, my, i=1;

void swapx(){
	int aux = mx;
	mx = nx;
	nx = aux;
}
void swapy(){
	int aux = my;
	my = ny;
	ny = aux;
}

double dist(int ax, int ay, int bx, int by){
	return(sqrt(sq(ax - bx) + sq(ay - by)));
}

int main(){
	cout.imbue(locale("German_germany"));
	cout.precision(3); 
	double aux, aux2;
	cin >> ax >> ay >> bx >> by;
	while ((ax != 0) || (ay != 0) || (bx != 0) || (by != 0)){
		cin >> nx >> ny >> mx >> my;
		
		if (nx == mx){
			swapy();
			swapx();
		}
		if (!(((bx > nx) && (ax > nx)) || ((bx < nx) && (ax < nx)))){				//Es posible que la pared esté en el medio del segmento.
			aux = 1.0*((ny - by)/(res(ay, by)))*((nx - mx)*(ax - bx))/(-mx*bx*1.0);
			//printf("%lf\n", aux);
			if ((aux < my) && (aux < ny) || (aux > my) && (aux > ny)){			//No tienen que esquivar la pared.
				cout << "Case " << i << ": " << (0.5*dist(ax, ay, bx, by)) << endl;
			} else {
				aux = 0.5*(dist(ax, ay, nx, ny) + dist(bx, by, nx, ny));
				aux2= 0.5*(dist(ax, ay, mx, my) + dist(bx, by, mx, my));
				if (aux < aux2){
					cout << "Case " << i << ": " << aux << endl;
				}else{
					cout << "Case " << i << ": " << aux2 << endl;
				}
			}
		} else 
			cout << "Case " << i << ": " << (0.5*dist(ax, ay, bx, by)) << endl;
		fin:;
		cin >> ax >> ay >> bx >> by;
		i++;
	}
}
