#include <cmath>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
typedef long long tint;
using namespace std;


int main(){
	tint a, b, n, m, i=0;
	cin >> a >> b;
	
	for(n = 3; ((n)<=(a+b)); n++){
		for(m = 3; m <= n; m++){
			if(((n*m)==(a+b)) && (((n - 1)*2 + (m - 1)*2) == a)){
				cout << n << " " << m;
				goto END;
			}
		}
	}
	END: return 0;
}