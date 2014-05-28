#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

//prob WA

int main(){
	int t, n, m, i,k;
	char aux;
	cin >> t;
	for(;t--;){
		k=0;
		cin >> n >> m;
		char a[n],b[m];
		map<char, char> M;
		pair<map<char,char>::iterator, bool> ret;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		for(i=0;i<m;i++){
			cin >> aux;
			ret = M.insert(make_pair(aux, a[k]));
			if(!ret.second){
				b[k++] = aux;
			}
		}
		printf("%s\n", b);
	}
}
