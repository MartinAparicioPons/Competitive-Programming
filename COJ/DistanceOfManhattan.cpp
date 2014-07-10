#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;


int abso(int a){
	if (a < 0)
		return -a;
	return a;
}

int dist(int ax, int ay, int bx, int by){
	return(abso(ax - bx) + abso(ay - by));
}


int main(){
	int ax,ay,bx,by,t;
	cin >> t;
	while(t--){
		cin >> ax >> ay >> bx >> by;
		printf("%d\n", ((dist(ax,ay,bx,by))));
	}
}