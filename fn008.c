/*
Calcule o valor de uma base elevada a um expoente inteiro positivo usando recursão.
*/

#include <stdio.h>
#include <stdlib.h>

int function(int b, int e);

int main()
{
    int x = 0, y = 0;

    system("cls");

    printf("\n \t Por favor, insira a base: ");
    scanf("%d", &x);
    printf("\n \t Agora insira o expoente: ");
    scanf("%d", &y);

    printf("\n \t o resultado final e: %d", function(x, y));

    return 0;
}

int function(int b, int e)
{
    if (e == 1)
    {
        return b;
    }
    else
    {
        return b * function(b, e-1);
    }
}