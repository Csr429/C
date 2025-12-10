#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    system("cls");
    setlocale(LC_ALL, "pt-br");

    char palavras[100] = ("Palavras apenas, paravras pequenas, palavras, momento, palavras");

    for (int x = 0; x < 100; x++)
    {
        printf("for: %d = %d\n", x, palavras[x]);
    }

    int i = 0;
    do
    {
        printf("while: %d = %c \n", i, palavras[i]);
        i++;
    } while (palavras[i] != '\0');
}