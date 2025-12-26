#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");

    typedef struct
    {
        char name[100];
        int idade;
        char genero;
    } pessoa;

    pessoa teste;

    printf("\n Por favor, insira o seu nome: ");
    scanf("%50[^\n]", &teste.name);
    fflush(stdin);

    printf("\n Agora, inclua a idade, por favor: ");
    scanf("%d", &teste.idade);
    fflush(stdin);

    printf("\n Agora, insira o seu genero(m/f): ");
    scanf("%c", &teste.genero);
    fflush(stdin);

    printf("\n Seu nome e: %s", teste.name);
    printf("\n sua idade e: %d", teste.idade);

    printf("\n seu genero e: %c", teste.genero);

    return 0;
}