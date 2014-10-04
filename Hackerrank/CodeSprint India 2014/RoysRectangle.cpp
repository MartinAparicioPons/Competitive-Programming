#include <bits/stdc++.h>
using namespace std;


int main() {
    int T, a, b, c, d, e, f, r;
    cin >> T;
    while(T--){
        cin >> a >> b >> c >> d >> e >> f;
        r = min(min(abs(a-c), abs(a-e)), min(abs(b-d), abs(b-f)));
        cout << r << endl;
    }
    return 0;
}
