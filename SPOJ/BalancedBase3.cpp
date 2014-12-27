#include <bits/stdc++.h>
using namespace std;

int main(){
	int T, a, i, aux;
	string b;
	cin >> T;
	while(T--){
		cin >> a;
		if(a == 0){
			cout << 0 << endl;
			continue;
		}
		
		b = "";
		aux = a;
		while(aux > 0){
			b += '0';
			aux /= 3;
		}
		b += '0';
		aux = a;
		i = 0;
		while(aux > 0){
			b[i] += (aux%3);
			if(b[i] == '3'){
				b[i+1]++;
				b[i] = '0';
			} else if(b[i] == '2'){
				b[i+1]++;
				b[i] = '-';
			} else if(b[i] == '1'){
				b[i] = '+';
			}
			i++;
			aux /= 3;
		}
		if(b[i] == '1') b[i] = '+';
		else if(b[i] == '0') b = b.substr(0, b.size() - 1);
		string s(b.rbegin(), b.rend());
		cout << s << endl;
	}
}
