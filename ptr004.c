#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    short int dia, mes, ano;
} data;

void function(data *x);

int main()
{
    system("cls");

    data aniversario;

    aniversario.dia = 12;
    aniversario.mes = 2;
    aniversario.ano = 24;

    printf("\n %d/%d/%d", aniversario.dia, aniversario.mes, aniversario.ano);

    function(&aniversario);

    printf("\n %d/%d/%d", aniversario.dia, aniversario.mes, aniversario.ano);
}

void function(data *x)
{
    x->dia = 12;
    x->mes = 12;
    x->ano = 12;
}