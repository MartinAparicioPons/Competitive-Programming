#include <stdio.h>
#include <iostream>
#define MAX 200000
using namespace std;

//WA

int main(){
	unsigned long long int vec[MAX];
	int monedas[] = {6,5,3,1};
    int i, j, moneda;
    vec[0]=1;
    for(i = 0; i < 4; i++){
        moneda = monedas[i];
        for(j = moneda; j < MAX; j++)
            vec[j] += vec[j - moneda];
    }
    while(cin >> i){
        if(vec[i] > 1)
            printf("%llu\n", vec[i], i);
        else
            printf("%d\n", i);
    }
}
