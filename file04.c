#include <stdio.h>
#include <stdlib.h>

void escreve(char nome);

int main()
{

    system("cls");

    return 0;
}

void escreve(char nome)
{
    FILE *file;
    char frase[500];

    file = fopen(nome, "w");

    if(file)
    {
        printf("\n Por favor, insira uma frase e pressione enter");
        scanf("%500[^\n]", frase);
        
    }
    else 
    {
        printf("\n Erro ao acessar o arquivo");
    }
}