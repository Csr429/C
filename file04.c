#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreve(char nome[]);
void leitura(char nome[]);

int main()
{
    char arquivo[] = {"..\\files\\file04.txt"};

    system("cls");
    escreve(arquivo);
    leitura(arquivo);

    return 0;
}

void escreve(char nome[])
{
    FILE *file;
    char frase[500];

    file = fopen(nome, "w");

    if (file)
    {
        printf("\n Por favor, insira uma frase e pressione enter ou tecle '.' e pressione enter para finalizar. \n");
        scanf("%500[^\n]", frase);
        fflush(stdin);
        while (strlen(frase) > 1)
        {
            fputs(frase, file);
            fputc('\n', file);
            fflush(stdin);
            scanf("%500[^\n]", frase);
        }

        fclose(file);
    }
    else
    {
        printf("\n Erro ao acessar o arquivo");
    }
}

void leitura(char nome[])
{

    FILE *file;
    char frase[500];
    file = fopen(nome, "r");

    if (file)
    {

        while (!feof(file))
        {
            if (fgets(frase, 500, file))
            {
                printf("\n ---> %s", frase);
            }
        }

        fclose(file);
    }
    else
    {
        printf("Erro ao abrir o arquqivo");
    }
}