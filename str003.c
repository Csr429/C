#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "pt-br");

    char nome[10];

    printf("\n Por favor, digite seu nome: ");
    scanf("%10[^\n]", nome);
    printf("\n Seu nome é: %s", nome);
}