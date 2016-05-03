#include <bits/stdc++.h>
using namespace std;

static const int N = 10000000, LOGN = 15;
int lp[N+1], pr[N/LOGN], cp; 
void magicSieve(){
    cp = 0;
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr[cp++] = i;
        }

        for (int j=0; j<cp && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i*pr[j]] = pr[j];
    }
}

set<int> s;

int cantfact(int n){
    int f = 0;
    while(n && lp[n]){
        n /= lp[n];
        f++;
    }
    return f++;
}

int main(){
    int c, n;
    magicSieve();
    cin >> c;
    while(c--){
        s.clear();
        cin >> n;
        int a, b;
        a = b = 0;
        for(int i = 2; i <= n; i++){
            a += cantfact(i);
            if(binary_search(pr, pr+cp, i)) b++;
        }
        cout << b << " " << a << endl;
    }
}
