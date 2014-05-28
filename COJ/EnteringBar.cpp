#include <utility>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string s;

bool esAlcohol(){
	return ((s == "ABSINTH") || (s == "BEER") || (s == "BRANDY") || (s == "CHAMPAGNE") || (s == "GIN") || (s == "RUM") || (s == "SAKE") || (s == "WHISKEY") || (s == "TEQUILA") || (s == "VODKA") || (s == "WINE"));
}

bool edadMenor18(){
	return((s == "0") || (s == "1") || (s == "2") || (s == "3") || (s == "4") || (s == "5") || (s == "15") || (s == "14") || (s == "13") || (s == "12") || (s == "11") || (s == "10") || (s == "9") || (s == "8") || (s == "7") || (s == "6") || (s == "16") || (s == "17"));
}

int main() {
	int t, res, n;
	cin >> t;
	for(;t--;){
		res = 0;
		cin >> n;
		for(;n--;){
			cin >> s;
			if((s[0] < '0')||(s[0] > '9')){
				if(esAlcohol()) res++;
				//puts("tet");
			} else {
				//puts("tets");
				if(edadMenor18()) res++;
			}
		}
		printf("%d\n", res);
	}
}