#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "pt-br");

    char palavras [20];
    printf("\n Digite seu nome: ");
    fgets(palavras, 20, stdin);
    printf("\n Seu nome é: %s", palavras); 
}