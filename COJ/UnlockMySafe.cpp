#include <set>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int t, n, i, j;
	vector<char> d;
	string st;
	set<string> s;
	cin >> t;
	for(;t--;){
		d.clear();
		s.clear();
		st="";
		cin >> n;
		d.resize(n);
		for(i=1; i<=n; i++){
			d[i-1] = (i+'0');
		}
		do{
			st="";
			for(j=0; j<n; j++){
				st+=d[j];
				//cout << st << " pepe\n";
			}
			s.insert(st);
		} while (next_permutation(d.begin(), d.end()));
		i=0;
		for(set<string>::iterator it=s.begin(); it!=s.end(); it++, i++){
			//cout << ": " << *it << "\n";
			if(i == s.size()/3){
				cout << *it << "\n";
				break;
			}
		}
	}
}