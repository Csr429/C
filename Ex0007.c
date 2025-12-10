#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//! Portótipos de funções:
int EntradaDeInteiros(void);
int imprimindoValores(int a, int b);

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    //! Variáveis:
    int x = 0, y = 0, z = 0;

    x = EntradaDeInteiros();
    y = EntradaDeInteiros();

    imprimindoValores(x, y);
    printf("\n \t Fazendo a troca de valores...");

    //! alterando valores:
    z = x;
    x = y;
    y = z;

    imprimindoValores(x, y);
}

int EntradaDeInteiros(void)
{
    int i = 0;
    printf("Por favor, insira um valor para a variável: ");
    scanf("%d", &i);
    return i;
}

int imprimindoValores(int a, int b)
{
    printf("\n \t variavél x: %d", a);
    printf("\n \t variavél y: %d", b);
    return 0;
}