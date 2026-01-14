#include <stdio.h>
#include <stdlib.h>

void leitura(char *nome);
void escrita(char *nome);

int main()
{

    char arquivo[] = {"..\\files\\file03.txt"};
    system("cls");

    escrita(arquivo);
    leitura(arquivo);

    return 0;
}

void escrita(char *nome)
{
    FILE *file;
    char text;
    file = fopen(nome, "w");
    if (file)
    {
        printf("\n Por favor, insira um texto e pressione enter no final: \n");
        scanf("%c", &text);

        while (text != '\n')
        {
            fputc(text, file);
            scanf("%c", &text);
        }
    }
    else
    {
        printf("\n Erro ao abrir o arquivo");
    }

    fclose(file);
}

void leitura(char *nome)
{
    FILE *file;
    char text;

    file = fopen(nome, "r");

    if (file)
    {
        while (!feof(file))
        {
            text = fgetc(file);
            printf("%c", text);
        }
    }
    else
    {
        printf("\n Erro ao abrir o arquivo!");
    }

    fclose(file);
}