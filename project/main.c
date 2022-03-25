#include <stdio.h>
#include <stdlib.h>

#include "lib.h"


int main (){
    float value;
    printf("Para qual moeda deseja converter: ");
    scanf("%s",code);
	makeRequest();
	printf("Qual o valor em BRL: ");
    scanf("%f",&value);
    value = value * bid;
    printf("Valor em %s: %f",code,value);

    return 0;
}
