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

int n, r1, r2, ans[50005], pi;
vector<int> tree[50005];
bool vis[50005];

int bfs () {
    queue<int> q;
    memset(vis, 0, sizeof vis);
    q.push(r2);
    ans[r2] = -1;
    vis[r2] = true;
    int act;
    while (!q.empty()) {
        act = q.front();
        q.pop();
        for (int i=0; i<tree[act].size(); i++) {
            if (!vis[tree[act][i]]) {
                vis[tree[act][i]] = true;
                ans[tree[act][i]] = act;
                q.push(tree[act][i]);
            }
        }
    }
}

int main() {
    int i, j;
    cin>>n>>r1>>r2;
    for (i=1; i<=n; i++) {
        if (i != r1) {
            cin>>pi;
            tree[pi].push_back(i);
            tree[i].push_back(pi);
        }
    }
    bfs();
    if (r2 == 1) {
        cout<<ans[2];
        for (i=3; i<=n; i++)
            if (i != r2)
                cout<<" "<<ans[i];
    } else {
        cout<<ans[1];
        for (i=2; i<=n; i++)
            if (i != r2)
                cout<<" "<<ans[i];
    }
    cout<<"\n";
    return 0;
}
