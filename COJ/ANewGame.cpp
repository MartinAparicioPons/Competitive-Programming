#include <set>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string B, W;


/*	1 = rock
	2 = paper
	3 = scissors
*/
int elemento(char c){
	if(c == 'w'){
		if((W == "WWW")||(W == "WWB")||(W == "BWW")||(W == "WBW"))
			return 3;
		else 		//if((W == "BBB")||(W == "WBB")||(W == "BBW")||(W == "BWB"))
			return 1;
	} else {
		if((B == "WWW")){
			return 3;
		} else {
			if((B == "BBB")){
				return 1;
			}else
				return 2;
		}
	}
	return 1;
}

int main() {
	cin >> B >> W;
	int w, b;
	w = elemento('w');
	b = elemento('b');
	swap(b, w);
	if((b == 1)&&(w == 1))
		printf("Williams won with Rock\nBianka lost with Rock");
	if((b == 3)&&(w == 3))
		printf("Williams won with Scissors\nBianka lost with Scissors");
	if((b == 3)&&(w == 2))
		printf("Williams won with Scissors\nBianka lost with Paper");
	if((b == 3)&&(w == 1))
		printf("Bianka won with Rock\nWilliams lost with Scissors");
	if((b == 1)&&(w == 3))
		printf("Williams won with Rock\nBianka lost with Scissors");
	if((b == 1)&&(w == 2))
		printf("Bianka won with Paper\nWilliams lost with Rock");	
}