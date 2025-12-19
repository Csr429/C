/*
Implemente uma função recursiva que imprima uma string do último caractere ao primeiro.
*/

#include <stdio.h>
#include <stdlib.h>

int function(char palavra[]);

int main()
{

    system("cls");

    char stg[50];

    printf("\n Por favor, insira uma palavra: ");
    scanf("%s", &stg);
    printf("\n %s \n", stg);

    function(stg);
}

int function(char palavra[])
{
    if (*palavra == '\0')
    {
        return 0;
    }
    else
    {
        function(palavra + 1);
        printf("%c", *palavra);
    }
    return 0;
}