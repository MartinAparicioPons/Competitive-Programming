#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
typedef long long tint;

//WA

tint modExp(tint a,tint b,tint c){
    tint x=1,y=a;
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c;
        b /= 2;
    }
    return x%c;
}

int main(){
	tint t, a, b;
	cin >> t;
	for(;t--;){
		cin >> a >> b;
		cout << modExp(a, b, 10) << endl;
	}
}
