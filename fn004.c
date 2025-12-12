/*
Exercício 1: Contagem Regressiva SimplesObjetivo: Entender o caso base e a chamada recursiva simples.
Descrição: Implemente uma função recursiva que receba um número inteiro n e imprima a contagem regressiva de n até 1.
*/

#include <stdio.h>
#include <stdlib.h>

int regressiva(int x);

int main()
{
    int i = 0;
    system("cls");

    printf("\n Por favor, insira um numero: ");
    scanf("%d", &i);
    regressiva(i);

    return 0;
}

int regressiva(int x)
{
    if (x == 0)
    {
        printf("\n %d", x);
        return 0;
    }
    else
    {
        printf("\n %d", x);
        return regressiva(x-1);
    }
}