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

string DecToBin(tint number)
{
    if(number == 0) return "4";
    if(number == 1) return "7";

    if(number % 2 == 0)
        return DecToBin(number/2) + "4";
    else
        return DecToBin(number/2) + "7";
}

int main(){
	tint num, res, i=2, j=0;
	cin >> num;
	for(; (num > 0); i*=2){
		num -= i;
		j++;
	}
	num += (i/2) - 1;
	string str = DecToBin (num);
	str = string(str.rbegin(), str.rend());
	for(;(str.length() < j);){
		str += "4";
	}
	str = string(str.rbegin(), str.rend());
	cout << str;
}