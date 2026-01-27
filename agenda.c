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
    int tam = 0, qtd = 0;
    system("cls");

    return 0;
}

int imprimir(contato **c, int qtty)
{
    printf("=====================================================================================");
    printf("\n Lista de contatos \n");
    printf("=====================================================================================");
    for (int i = 0; i < qtty; i++)
    {
        printf("\n %d: %s %2d/%2d/%4d",
               (i+1),
               (*(c+i))->nome,
               (*(c+i))->nascimento.dia,
               (*(c+i))->nascimento.mes,
               (*(c+i))->nascimento.ano);
    }
    return 1;
}

/*
int cadastrar(contato **c, int qtty, int size)
{
    pritnf("\n Por favor, insira o nome completo e a data de nascimento no formato DD MM AAAA: ");
    scanf("%[100] %d %d %d", *(c+qtty)->nome, *(c+qtty)-> nascimento.dia, *(c+qtty)-> nascimento.mes, *(c+qtty)->nascimento.ano);
}
    */