#include <stdio.h>
#include <stdlib.h>

//! Funtion prototype
int fatorial(int i);

int main()
{
    int i = 0;

    system("cls");

    printf("\n \t Por favor, insira um numero inteiro: ");
    scanf("%d", &i);

    fatorial(i);

    return 0;
}

int fatorial(int i)
{
    if (i <= 1)
    {
        printf("\n \t %d", i);
        return i;
    }
    else
    {
        printf("\n \t %d", i);
        i = i * fatorial(i - 1);
        printf("\n \t %d", i);
        return i;
    }
}