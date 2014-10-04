#include <bits/stdc++.h>
using namespace std;


int main() {
    int T, an, bn, i, j, r;
    string a, b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        an = a.size();
        r = 0;
        for(i = 0; i < an; i++){
            if(b.find(a[i]) != string::npos){
                r++;
            }
        }
        cout << r << endl;
    }
    return 0;
}
