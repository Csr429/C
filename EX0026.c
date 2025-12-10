/*
Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

#include <stdio.h>
#include <stdlib.h>

float coleta();
int main()
{
    float vetor[4];
    int negativos = 0, positivos = 0;

    for (int x = 0; x < 4; x++)
    {
        vetor[x] = coleta();
        vetor[x] < 0 ? negativos++ : positivos++;
    }

    printf("\n valores positivos: %d", positivos);
    printf("\n valores negativos: %d", negativos);
}

float coleta()
{
    float x = 0;

    printf("Por favor, insira um numero: ");
    scanf("%f", &x);
    return x;
}