#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;



int main () {
    string a;
    int cuatros=0, sietes=0;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == '4')
            cuatros++;
        if(a[i] == '7')
            sietes++;
    }
    if(cuatros == 0 && sietes == 0) 
        cout << "-1";
    else
        (cuatros < sietes)?cout<<"7":cout<<"4";
}
