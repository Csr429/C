#include <stdio.h>
#include <stdlib.h>

void imprimirDecreschente(int x);
void imprimirCrescente(int x);

int main()
{
    system("cls");

    int n = 0;

    printf("\n Por favor, insira um numero: ");
    scanf("%d", &n);

    printf("\n Imprimindo decrescente");
    imprimirDecreschente(n);

    printf("\n Imprimindo crescente");
    imprimirCrescente(n);
    return 0;
}

void imprimirDecreschente(int x)
{
    if (x == 0)
    {
        printf("\n %d", x);
    }
    else
    {
        printf("\n %d", x);
        imprimirDecreschente(x - 1);
    }
}

void imprimirCrescente(int x)

{
    if (x == 0)
    {
        printf("\n %d", x);
    }
    else
    {
        imprimirCrescente(x - 1);
        printf("\n %d", x);
    }
}