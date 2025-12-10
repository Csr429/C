#include <stdio.h>
#include <stdlib.h>

//! Funções:
void recursiva(int i);

int main()
{
    int i = 0;

    system("cls");
    printf("\n \t Por favor, insira um numero inteiro: ");

    scanf("%d", &i);
    printf("\n \t Iniciando o teste:");
    recursiva(i);

}

void recursiva(int i)
{
    if (i <= 0)
    {
        printf("\n %d", i);
    }
    else
    {
        printf("\n %d", i);
        recursiva(i-1);

    }
}