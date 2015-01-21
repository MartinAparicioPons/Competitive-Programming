#include <bits/stdc++.h>
using namespace std;

int main(){
	char a;
	string s;
	int i, n;
	cin >> s;
	for(a = 'a'; a <= 'z'; a++){
		for(i = 0, n = s.size(); i < n; i++){
			s.insert(i, 1, a);
			string r(s.rbegin(), s.rend());
			if(s == r){
				cout << r << endl;
				return 0;
			}
			s.erase(i, 1);
		}
		s.push_back(a);
		string r(s.rbegin(), s.rend());
		if(s == r){
			cout << r << endl;
			return 0;
		}
		s.erase(n, 1);
	}
	cout << "NA\n";
	return 0;
}
