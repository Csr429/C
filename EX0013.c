/* Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos e positivos. */

#include <stdio.h>
#include <stdlib.h>

//! function prototypes

int getInt(int i);
int main()
{
    system("cls");

    int numbers[5];
    int positive = 0, negative = 0;

    printf("\n \t Por favor, insira 5 valores para analise! \n");
    for (int i = 0; i < 5; i++)
    {
        numbers[i]= getInt(i);

        numbers[i] >= 0 ? positive++ : negative++;
    }

    printf("\n \t Numeros positivos: %d", positive);
    printf("\n \t Numeros negativos: %d", negative);
}

int getInt(int i)
{
    printf(" \t %d valor: ", i+1);
    scanf("%d", &i);
    return i;
}
