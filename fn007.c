/*
Crie uma função recursiva que calcule o produto de dois números inteiros positivos ($a \times b$) usando apenas a operação de soma.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y);

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    system("cls");

    printf("\n Por favor, insira um número: ");
    scanf("%d", &numero1);
    printf("\n Por favor, insira um número: ");
    scanf("%d", &numero2);

    printf("\n valor: %d", soma(numero1, numero2));

    return 0;
}

int soma(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    else
    {
        return x + soma(x, y-1);
    }

}
