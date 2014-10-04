#include <bits/stdc++.h>
using namespace std;


int main() {
    int T, n, a[1111], r, t, i;
    double pr;
    cin >> T;
    while(T--){
        cin >> n;
        t = 0;
        for(i = 0; i < n; i++){
            cin >> a[i];
            t+=a[i];
        }
        pr = ((double)t)/((double)n);
        r = 0;
        for(i = 0; i < n; i++){
            if(a[i] > pr) r++;
        }
        cout << r << endl;
    }
    return 0;
}
