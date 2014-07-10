#include <stdio.h>
#include <iostream>

#define MAX 30005
//Calcula la cantidad de maneras diferentes que se puedan formar la entrada con las monedas[].
int main(){
	unsigned long long int vec[MAX];
	int monedas[] = {1, 5, 10, 25, 50};				//valor de las monedas.
    int i, j, moneda;
    vec[0]=1;
    for(i = 0; i < 5; i++){							//Precalculamos los resultados.
        moneda = monedas[i];
        for(j = moneda; j < MAX; j++)
            vec[j] += vec[j - moneda];
    }
    while(scanf("%d", &i) == 1){
        if(vec[i] > 1)
            printf("%llu\n", vec[i], i);
        else
            printf("%d\n", i);
    }
}