#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main () {
    int i, n, m, k, a, res=0;
    cin >> n >> m >> k;
    for(i=0; i<n; i++){
        cin >> a;
        if(a == 1){
            if(m > 0) m--;
            else res++;
        }
        if(a == 2){
            if(k > 0) k--;
            else{
                if(m > 0) m--;
                else res++;
            }
        }
    }
    cout << res;
}
