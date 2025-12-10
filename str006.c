#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "pt-br");

    char palavras[100] = ("Olá. Tudo bem??? Vamos aprender a programar com a linguagem c?");

    printf("\n O tamanho da string é de: %d carácteres!", strlen(palavras));
}