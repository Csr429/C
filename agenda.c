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

int preencherAgenda(contato **agenda);
void impirmirAgenda(contato **agenda, int qnt);

int main()
{
    contato *agenda[50];
    int tam = 0, qtd = 0;
    system("cls");

    qtd = preencherAgenda(&agenda);

    return 0;
}

int preencherAgenda(contato **agenda)
{
    int choose = 0;
    int qnt = 0;
    do
    {
        do
        {
            printf("\n Por favor, insira o %dº contato na seguinte ordem: Nome, data de nascimento dd mm aaaa e genero (m/f):", qnt);
            scanf("%100[^\n] %d %d %d %c", (*(agenda + qnt))->nome, &(*(agenda + qnt))->nascimento.dia, &(*(agenda + qnt))->nascimento.mes, &(*(agenda + qnt))->nascimento.ano, &(*(agenda + qnt))->genero);
            qnt++;
            printf("\n Deseja inserir outra pessoa? Caso sim, insira 1: ");
            scanf("%d", &choose);
            fflush(stdin);
        } while (choose == 1);

        printf("sai do primeiro loop");
    } while (choose == 1);

    return qnt;
}

void impirmirAgenda(contato **agenda, int qnt)
{
    for (int i = 0; i < qnt; i++)
    {
        printf("\n \t %s", (*(agenda + i))->nome);
        printf("\n Nome: %s", (*(agenda + i))->nome);
        printf("\n Data de nascimento: %d/%d/%d", (*(agenda + i))->nascimento.dia, (*(agenda + i))->nascimento.mes, (*(agenda + i))->nascimento.ano);
        printf("\n Genero: %c", (*(agenda + i))->genero);
    }
}