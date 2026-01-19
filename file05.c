#include <stdio.h>
#include <stdlib.h>

void escreve(char arquivo[]);
void le(char arquivo[]);

int main()
{

    system("cls");

    char arquivo[] = {"..\\files\\file05.txt"};
    // escreve(arquivo);
    le(arquivo);
}

void escreve(char arquivo[])
{
    int escolha, idade;
    float altura;
    char nome[100];
    FILE *file;

    file = fopen(arquivo, "w");

    if (file)
    {
        do
        {
            printf("\n Por favor, insira o nome, a idade e a altura de uma pessoa: \n");
            scanf("%100[^\n] %d %f", nome, &idade, &altura);
            // fprintf(file, "\n teste1 \n ");
            fprintf(file, "%s %d %.2f \n", nome, idade, altura);
            // fprintf(file, "\n teste2 \n ");
            printf("\n você deseja adicionar uma nova pessoa? se sim, insira 1: ");
            scanf("%d", &escolha);
            fflush(stdin);

        } while (escolha == 1);
    }
    else
    {
        printf("\n Erro ao abrir o arquivo");
    }
}

void le(char arquivo[])
{
    int idade, fscanf_return;
    float altura;
    char nome[100];
    FILE *file;

    file = fopen(arquivo, "r");

    if (file)
    {
        printf("\n \t Datod lidos do arquivo: \n ");
        while (!feof(file))
        {
            printf("\n ");
            fscanf_return = fscanf(file, "%s%d%f", nome, &idade, &altura);
            printf("%d", fscanf_return);
            printf("\n Nome: %s", nome);
            printf("\n Idade: %d", idade);
            printf("\n Altura: %.2f", altura);
        }

        fclose(file);
    }
    else
    {
        printf("\n Erro ao abrir o arvquivo");
    }
}