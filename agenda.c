#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia, mes, ano;
} data;

typedef struct
{
    char nome[100];
    data nascimento;
    char genero;
} contato;

int imprimir(contato **c, int qtty);
int cadastrar(contato **c, int qtty, int size);

int main()
{
    contato *agenda[50];
    int tam = 50, qtd = 0;
    system("cls");

    imprimir(agenda, qtd);
    qtd += cadastrar(agenda, qtd, tam);
    printf("\n qtd = %d \n ", qtd);

    imprimir(agenda, qtd);

    return 0;
}

int imprimir(contato **c, int qtty)
{
    printf("=====================================================================================");
    printf("\n Lista de contatos \n");
    printf("=====================================================================================");
    for (int i = 0; i < qtty; i++)
    {
        printf("\n teste");
        printf("\n %d: %s %2d/%2d/%4d %c",
               (i + 1),
               (*(c + i))->nome,
               (*(c + i))->nascimento.dia,
               (*(c + i))->nascimento.mes,
               (*(c + i))->nascimento.ano,
               (*(c + i))->genero);
    }
    return 1;
}

int cadastrar(contato **c, int qtty, int size)
{
    if (qtty < size)
    {
        contato *novo = calloc(sizeof(contato), 1);
        printf("\n Por favor, insira um novo contato:");
        printf("\n Nome: ");
        scanf("%100[^\n]", novo->nome);
        fflush(stdin);
        printf("\n Por favor, insira a data de nascimento no seguinte formato: dd mm aaaa\n ");
        scanf("%d%d%d", &novo->nascimento.dia, &novo->nascimento.mes, &novo->nascimento.ano);
        fflush(stdin);
        printf("\n Genero(M/F): ");
        scanf("%c", &novo->genero);
        c[qtty] = novo;

        return 1;
    }
    else
    {
        printf("\n Excedido o tamanho do vetor");
        return 0;
    }
}
