/*
Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);
*/

#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b);

int main()
{
    system("cls");


    return 0;
}

void troca(float *a, float *b)
{
    float i = 0;

    i = *a;
    *b=*a;
    *a=i;
}