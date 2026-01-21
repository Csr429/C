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

int preencherAgenda(contato **agenda, int tamanho, int posicaoAtual);
void impirmirAgenda(contato **agenda, int qnt);

int main()
{
    contato *agenda[50];
    int tam = 0, qtd = 0;
    system("cls");

    qtd = preencherAgenda(&agenda);

    return 0;
}

int preencherAgenda(contato **agenda, int tamanho, int posicaoAtual)
{

    if(posicaoAtual<tamanho)
    {
        (*(agenda+posicaoAtual)) = calloc(1, sizeof(contato));
        printf("\n \t por favor, insira o %d contato na seguinte ordem: Nome data de nascimento no formato dd mm aaaa e, por fim, insira o genero(m/f): \n");
        scanf("%100[^\n] %d %d %d %c", *(*(agenda+posicaoAtual))->nome, &*(*(agenda+posicaoAtual))->nascimento.dia, *(*(agenda+posicaoAtual))->nascimento.mes, *(*(agenda+posicaoAtual))->nascimento.ano, *(*(agenda+posicaoAtual))->genero )
    }
    else
    {
        pritnf("\n Limite atingido");
        return 0; 
    }
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

/*
int preencherAgenda(contato **agenda, int tamanho, int posicaoAtual)
{
    int choose = 0;
    int qnt = 0;
    do
    {
        do
        {
            printf("\n Por favor, insira o %dº contato na seguinte ordem: Nome, data de nascimento dd mm aaaa e genero (m/f):", (qnt+1));
            scanf("%100[^\n] %d %d %d %c", (*(agenda + qnt))->nome, &(*(agenda + qnt))->nascimento.dia, &(*(agenda + qnt))->nascimento.mes, &(*(agenda + qnt))->nascimento.ano, &(*(agenda + qnt))->genero);
            fflush(stdin);
            qnt++;
            printf("\n Deseja inserir outra pessoa? Caso sim, insira 1: ");
            scanf("%d", &choose);
            fflush(stdin);
            printf("teste");
        } while (choose == 1);

        printf("sai do primeiro loop");
    } while (choose == 1);

    return qnt;
}

*/