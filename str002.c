#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    char palavras [] = {" Oi. Vamos aprenser a programar com a linguagem c?"};
    printf("\n %s", palavras); 
}