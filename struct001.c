#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");

    typedef struct
    {
        int idade;
        char nome[100];
        char genero;
    } pessoa;

    struct cidadao
    {
        int idade;
        char nome[100];
        char genero;
    };

    pessoa teste;
    struct cidadao kane;

    teste.idade = 25;
    strcpy(teste.nome, "Carlos Alberto");
    teste.genero = 'm';

    kane.idade = 70;
    strcpy(kane.nome, "Roberto Carlos");
    kane.genero = 'm';

    printf("\n Pessoa:");
    printf("\n Nome: %s", teste.nome);
    printf("\n Idade: %d", teste.idade);
    printf("\n Genero: %c", teste.genero);
    

    printf("\n \n");

    printf("\n kane:");
    printf("\n Nome: %s", kane.nome);
    printf("\n Idade: %d", kane.idade);
    printf("\n Genero: %c \n ", kane.genero);

    system("pause");

    return 0;
}