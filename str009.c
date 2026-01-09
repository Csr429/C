#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nome[100];

    system("cls");

    printf("\n Por favor, insira o seu nome: ");
    scanf("%[^\n]s", nome);

    printf("%s \n", nome);

    for (int i = strlen(nome); i >= 0; i--)
    {
        printf("%c", nome[i]);
    }

    return 0;
}