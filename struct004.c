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
    data nascimento;
    char genero;
} pessoa;

pessoa preencher();
void imprimir(pessoa p);

int main()
{
    system("cls");

    pessoa x = preencher();

    imprimir(x);

    return 0;
} 

pessoa preencher()
{
    pessoa p;

    printf("\n Por favor, insira o seu nome: ");
    scanf("%100[^\n]", p.nome);
    printf("\n insira sua data de nacimento no formato DD MM AAAA: ");
    scanf("%hd%hd%hd", &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);
    fflush(stdin);
    printf("\n Por favor, insira seu genero(h/m): ");
    scanf("%c", &p.genero);
    fflush(stdin);

    return p;
}
void imprimir(pessoa p)
{
    printf("\n seu nome e: %s", p.nome);
    printf("\n sua data de nascimento e %d/%d/%d", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
    printf("\n seu genero e: %c", p.genero);
}
