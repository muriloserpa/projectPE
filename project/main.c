#include <stdio.h>
#include <stdlib.h>

#include "lib.h"


int main (){
    float value;
    char code[4];
    do{
       printf("Para qual moeda deseja converter: ");
       scanf("%s",code);
    } while(!verifyCode(code));
	makeRequest(code);
	printf("Qual o valor em BRL: ");
    scanf("%f",&value);
    value = value * bid;
    printf("Valor em %s: %.3f \n",code,value);
    system("pause");

    return 0;
}
