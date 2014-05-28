#include <cstdio> 
#include <iostream> 
#include <utility> 
#include <algorithm> 
#include <string> 
#include <cstring> 
#define X first
#define Y second
using namespace std;

//WA

typedef long long int coord;

struct Point{
	coord x,y;
	Point(){}
	Point(coord x_, coord y_) : x(x_), y(y_){}
	coord lensqr(){return x*x + y*y;}
};

coord det (Point A, Point B) {return A.x*B.y - A.y*B.x;}
Point operator- (Point A, Point B) {return Point(A.x - B.x, A.y - B.y);}

coord area(Point A, Point B, Point C) {return det(B-A, C-A);}


coord a1,a2,b1,b2;
bool cut(Point p1, Point p2, Point q1, Point q2){
	if(max(p1.x, p2.x) < min(q1.x, q2.x)) return false;
	if(max(p1.y, p2.y) < min(q1.y, q2.y)) return false;
	if(min(p1.x, p2.x) > max(q1.x, q2.x)) return false;
	a1 = area(p1,p2,q1);
	a2 = area(p1,p2,q2);
	b1 = area(q1,q2,p1);
	b2 = area(q1,q2,p2);
	if((a1>0) && (a2 > 0)) return false;
	if((a1<0) && (a2 < 0)) return false;
	if((b1>0) && (b2 > 0)) return false;
	if((b1<0) && (b2 < 0)) return false;
	return true;	
}


	Point K[10000];
	pair< Point,Point > W[10000];
	coord CantS[10];
	coord i,j,h,s, k, w;
	
int main(){
	cin >> s >> k >> w;
	memset(CantS, 0, sizeof(CantS));
	for(i = 0;i < k; i++){
		cin >> K[i].x >> K[i].y;
	}
	for(i = 0; i<w; i++){
		cin >> W[i].X.x >> W[i].X.y >> W[i].Y.x >> W[i].Y.y;
	}
	for(i = 0; i < s; i++){					//10
		for(j = 0; j < k; j++){				//10000
			if(i != j){
				for(h=0; h < w; h++){		//10000 (hasta cortar).
					if(cut(W[h].X, W[h].Y, K[i], K[j])){
						goto FIN;
					}
				}
				CantS[i]++;
				FIN:;
			}
		}
		printf("%lli\n", CantS[i]);
	}
}


