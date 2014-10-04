#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    string a;
    cin >> T;
    while(T--){
        cin >> a;
        if(next_permutation(a.begin(), a.end())){
            cout << a << endl;
        } else {
            cout << "no answer\n";
        }
    }
}
