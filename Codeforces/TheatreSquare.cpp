#include <cstdio>
#include <iostream>
using namespace std;

#define tint unsigned long long

int main(){
    tint n, m, a, x, y;
    cin >> n >> m >> a;
    x = (n / a) + ((n%a > 0)?1:0);  
    y = (m / a) + ((m%a > 0)?1:0);
    cout << x*y << endl;
}
