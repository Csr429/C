/*
    Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    system("cls");

    printf("Por favor, insira uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'A')
    {
        printf(" Sua letra e uma vogal!");
        return 0;
    }
    else if (letra == 'e' || letra == 'E')
    {
        printf(" Sua letra e uma vogal!");
        return 0;
    }
    else if (letra == 'i' || letra == 'I')
    {
        printf(" Sua letra e uma vogal!");
        return 0;
    }
    else if (letra == 'o' || letra == 'O')
    {
        printf(" Sua letra e uma vogal!");
        return 0;
    }
    else if (letra == 'u' || letra == 'U')
    {
        printf(" Sua letra e uma vogal!");
        return 0;
    }
    else
    {
        printf("não é uma vogal");
    }
}
