/* Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor. */

#include <stdio.h>
#include <stdlib.h>

//! Function's prototype
int get_int(int x);

int main()
{
    system("cls");
    int i = 0, j = 0, k = 0;
    int maior = 0, menor = 0;

    printf("\t Por favor, insira 3 valores");
    i = get_int(1);
    j = get_int(2);
    k = get_int(3);

    maior = (i > j && i > k) ? i : (j > k ? j : k);
    menor = (i < j && i < k) ? i : (j > k ? k : j);

    printf(" \n \t o maior valor e: %d", maior);
    printf(" \n \t o menor valor e: %d", menor);
}

int get_int(int x)
{
    printf("\n \t %d valor: ", x);
    scanf("%d", &x);
    return x;
}
