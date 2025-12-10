/* Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é divisível por nenhum deles */

#include <stdio.h>
#include <stdlib.h>

// Function prototype
int get_int();

int main()
{

    int i = 0;
    i = get_int();
    i % 2 == 0 ? printf("\n \t Numero divisivel por 2") : printf("\n \tNumero impar");
    i % 3 == 0 ? printf("\n \t Numero divisivel por 3") : printf("\n \t Numero nao divisivel por 3");
    i % 5 == 0 ? printf("\n \t Numero divisivel por 5") : printf("\n \t Numero nao divisivel por 5");
}

int get_int()
{
    int i = 0;

    printf("\n \t Por favor, insira um numero: ");
    scanf("%d", &i);
    return i;
}