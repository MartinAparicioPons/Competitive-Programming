//Reach The Point
 
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
 
 
 
int main() {
       
        int t;
        long long ans, x, y;
        scanf("%d", &t);
        while(t--){
                scanf("%lld %lld", &x, &y);
                x = abs(x);
                y = abs(y);
                if(!x && !y) {
                        ans = 0;
                } else if (x <= y) {
                        ans = x*2;
                        y -= x;
                        if (y) {
                                if (y % 2 == 0) ans += (y*2);
                                else ans += (((y-1)*2)+1);
                        }
                } else {
                        if (y) {
                                ans = (y*2)-1;
                                x -= (y-1);
                                if (x % 2 == 0) ans += (x*2);
                                else ans += (((x-1)*2)+1);
                        } else {
                                if (x % 2 == 0) ans = (x*2);
                                else ans = x*2+1;
                        }
                       
                }
                printf("%lld\n", ans);
        }
        return 0;
}
