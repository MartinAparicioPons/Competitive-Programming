#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <locale>
#define _MP make_pair
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define INF 10000000000
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

char let[] = {'C', '.'};
int f, act;

int main() {
    int n;
    cin>>n;
    cout<<n*n/2+((n*n)%2)<<endl;
    f = 0;
    for (int i=0; i<n; i++) {
        act = f;
        for (int j=0; j<n; j++) {
            cout<<let[(act+(j%2))%2];
        }
        f = (f+1)%2;
        cout<<endl;
    }
}
