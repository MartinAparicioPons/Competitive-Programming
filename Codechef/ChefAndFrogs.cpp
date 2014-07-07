//Chef and Frogs
 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <iterator>
#include <utility>
#include <list>
#include <stack>
#include <iomanip>
#include <bitset>
 
#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807ll
#define MAX_ULONG 18446744073709551615ull
#define MAX_DBL 1.7976931348623158e+308
#define EPS 1e-9
#define _log2(x) log(x) * 1.44269504088896340736
//const long double PI = 2*acos(0);
 
#define INF 1000000000
 
using namespace std;
 
int i, n, k, p, a[100005], pa[100005], rank[100005], q0, q1;
 
struct cmp {
        bool operator() (int n0, int n1) {return a[n0] > a[n1];}
};
 
priority_queue<int, vector<int>, cmp> pq;
 
int find_set (int i) {return (pa[i] == i) ? i : (pa[i] = find_set(pa[i]));}
 
void union_set (int i, int j) {
        int x = find_set(i);
        int y = find_set(j);
        if (x != y) {
                if (rank[x] > rank[y]) {
                        pa[y] = x;
                } else {
                        pa[x] = y;
                        if (rank[y] == rank[x]) rank[y]++;
                }
        }
}
 
int main() {
        scanf("%d %d %d", &n, &k, &p);
        for(i = 0; i < n; i++){
                rank[i] = 0;
                pa[i] = i;
                scanf("%d", &a[i]);
                pq.push(i);
        }
        int ant = pq.top(), act;
        pq.pop();
        while (!pq.empty()) {
                act = pq.top();
                pq.pop();
                if (a[act]-a[ant] <= k)
                        union_set(ant, act);
                ant = act;
        }
        for(i = 0; i < p; i++){
                scanf("%d %d", &q0, &q1);
                if (find_set(q0-1) == find_set(q1-1)) printf("Yes\n");
                else printf("No\n");
        }
       
        return 0;
}
