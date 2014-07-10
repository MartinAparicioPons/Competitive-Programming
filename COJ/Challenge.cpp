#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>
using namespace std;

int main(){
	int n,ac;
	string a, b;
	cin >> n;
	ac = 0;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		if (((a == "scissors") && (b == "paper")) || ((a == "rock") && (b == "scissors")) || ((a == "paper") && (b == "rock"))){
			ac--;
		}
		if (((a == "scissors") && (b == "rock")) || ((a == "paper") && (b == "scissors")) || ((a == "rock") && (b == "paper"))){
			ac++;
		}
	}
	if (ac == 0) printf("tied");
	if (ac < 0) printf("A win");
	if (ac > 0) printf("B win");
}
