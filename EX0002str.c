#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    system("cls");

    char nome[50];
    int i = 0;          // *contador
    int pos_espaco = 1; //*Indica se a letra veio após um espaço*/

    //*Leio o nome
    printf("nome: ");
    fgets(nome, 50, stdin);

    while (nome[i] != '\0')
    {
        //* se veio após um espaço, deixo maiúscula
        if (pos_espaco)
            nome[i] = toupper(nome[i]);
        pos_espaco = nome[i] == ' ';
        i++;
    }

    //* Mostro string

    printf("%s\n ", nome);

    system("pause");
    return 0;
}