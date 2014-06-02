#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

int rec(int a, int b){
    //printf("%d, %d.. ", a, b);
    if (a <= b) return b - a;
    if (a > b) return rec(a/2, b) + 1;
}

int main(){
    int t, n, a, b;
    cin >> t;
    for(;t--;){
        cin >> a >> b;
        n = rec(a,b);
        printf("%d\n", n);
    }
    return 0;
}
