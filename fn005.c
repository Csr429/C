/*
Exercício 2: Cálculo do FatorialObjetivo: Aplicar a recursão para um cálculo matemático clássico, entendendo o valor de retorno.
Descrição: Calcule o fatorial de um número inteiro n (n! = n \times (n-1) \times \dots \times 1).
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int x);

int main()
{
    system("cls");

    int i = 0;

    printf("\n Por favor, insira um numero: ");
    scanf("%d", &i);

    fatorial(i);

    return 0;
}

int fatorial(int x)
{
    if (x == 1)
    {
        printf("\n %d", x);
        return 1;
    }
    else
    {
        x = x * fatorial(x - 1);
        printf("\n %d", x);
        return x;
    }
}