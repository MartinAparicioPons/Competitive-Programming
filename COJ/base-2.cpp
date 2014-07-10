#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,i;
	string str;
	long act;
	cin >> n;
	for (i = 1; i <= n; i++){
		str = "";
		cin >> act;
		if (act == 0) str = "0";
		while (act != 0){
			if (act % (-2) == -1){
				str = '1' + str;
				act /= -2;
				act++;
			} else {
				if ((act % (-2)) == 1)					
					str = '1' + str;
					else
						str = '0' + str;
				act /= -2;			
			}
		}
		cout << "Case #" << i << ": " << str << endl;
	}
	return 0;

}
