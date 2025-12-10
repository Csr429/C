/*
Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    float conta = 0;
    int pessoas = 0;
    int gorjeta = 0;
    
    printf("\n Por favor, insira a conta: ");
    scanf("%f", &conta);

    printf("\n Por favor, insira a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    printf("\n Por favor, insira a porcentagem da gorjeta: ");
    scanf("%d", &gorjeta);

    printf("\n A conta e de R$:%.2f, a porcentagem da gorjeta e de %d%% e a quantidade de pessoas e de: %d", conta, gorjeta, pessoas);

    gorjeta = (gorjeta/100)*conta;
    conta = (conta+gorjeta) / pessoas;

    printf("\n Ficaram R$:%.2f por pessoa", conta);
}