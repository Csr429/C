#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    short int dia, mes, ano;
} data;

typedef struct
{
    char nome[100];
    short int idade;
    char genero;
    data nascimento;
} pessoa;

int main()
{
    system("cls");

    pessoa cidadao;

    printf("\n Por favor, insira o seu nome: ");
    scanf("%100[^\n]", &cidadao.nome);
    fflush(stdin);

    printf("\n idade: ");
    scanf("%d", &cidadao.idade);
    fflush(stdin);

    printf("\n genero(h/m): ");
    scanf("%c", &cidadao.genero);
    fflush(stdin);

    printf("\n sua data de nascimento no formato DD MM AAAA: ");
    scanf("%d%d%d", &cidadao.nascimento.dia, &cidadao.nascimento.mes, &cidadao.nascimento.ano);
    fflush(stdin);

    printf("\n Seu nome e: %s", cidadao.nome);
    printf("\n sua idade e: %d", cidadao.idade);
    printf("\n seu genero e: %c", cidadao.genero);
    printf("\n sua data de nascimento e: %d/%d/%d", cidadao.nascimento.dia, cidadao.nascimento.mes, cidadao.nascimento.ano);

    return 0;
}