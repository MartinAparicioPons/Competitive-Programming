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
#define se second
#define fi first
#define _MT(x, y, z) _MP(_MP(x, y), z)
#define _MTi(x, y, z) _MP(x, _MP(y, z))
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define INF 1000000000
#define MAX 20000000000ll
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;


int main() {
    string s, h="hello";
    int n, i, j, a;
    cin >> s;
    n = s.size();
    j = 0;
    for0(i, n){
        if(s[i] == h[j]){
            j++;
        }
    }
    if(j == h.size()) printf("YES\n");
    else  printf("NO\n");
}







