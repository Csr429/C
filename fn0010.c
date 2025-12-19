/*
Implemente uma função recursiva que conte o número de caracteres em uma string (excluindo o terminador \0), sem usar strlen.
*/

#include <stdio.h>
#include <stdlib.h>

int function(char word[]);

int main()
{
    char palavra[50];

    system("cls");

    printf("\n Por favor, insira uma palavra: ");
    scanf("%s", &palavra);

    printf("%d", function(palavra));
}

int function(char word[])
{
    if (*word == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + function(word+1);
    }
}