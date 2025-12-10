/*
Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float money = 0;

    #define conversao 5.3

    printf("\n Por favor, insira o valor a ser convertido: ");
    scanf("%f", &money);
    money = money/conversao;
    printf("\n O valor convertido e: %.2f", money);
}