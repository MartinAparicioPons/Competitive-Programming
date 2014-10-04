#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a, b;
    int T, n, i, j, c, r;
    cin >> T;
    while(T--){
        a.clear();
        b.clear();
        cin >> n;
        for(i = 0; i < n; i++){
            cin >> c;
            a.push_back(c);
        }
        for(i = 0; i < n; i++){
            cin >> c;
            b.push_back(c);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        r = 0;
        for(i = 0; i < n; i++){
            r = max(r, abs(a[i] - b[i]));
        }
        cout << r << endl;
    }
    return 0;
}
