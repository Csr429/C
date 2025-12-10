/*
Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    system("cls");
    int numero = 0;
    bool par = NULL;
    bool tres = NULL;
    bool cinco = NULL;

    printf("\n Por favor, insira um numero: ");
    scanf("%d", &numero);

    par = numero % 2 == 0 ? 1 : 0;
    tres = numero % 3 == 0 ? 1 : 0;
    cinco = numero % 5 == 0 ? 1 : 0;

    par == true ? printf("\n o valor e par") : printf("\n o valor nao e par");
    tres == true ? printf("\n o valor e divisivel por tres") : printf("\n o valor nao e divisivel por tres");
    cinco == true ? printf("\n o valor e divisivel por cinco") : printf("\n o valor nao e divisivel por cinco"); 
}