#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no
{
    int valor;
    struct no *proximo;
} No;

//? Procedimentos para lista
void inserir_no_inicio(No **lista, int num);
void inserir_no_final(No **lista, int num);
void inserir_no_meio(No **lista, int num, int anterior);


int main(void)
{
    setlocale(LC_ALL, "");
    system("cls");
}

//? Procedimento para adicionar no início
void inserir_no_inicio(No **lista, int num)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }
    else
    {
        printf("\n Erro ao alocar memória! ");
    }
}

//? Função para adicionar nó no final da lista

void inserir_no_final(No **lista, int num)
{
    No *aux, *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->valor = num;
        novo->proximo = NULL;

        //? É o primeiro?
        if (*lista == NULL)
        {
            *lista = novo;
        }
        else
        {
            aux = *lista;
            while (aux->proximo)
            {
                aux = aux->proximo;
                aux->proximo = novo;
            }
        }
    }
    else
        (printf("Erro ao alocar memória!"));
}

//? Função para inserir no meio da lista
void inserir_no_meio(No **lista, int num, int anterior)
{
    No *aux, *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->valor = num;
        // é o primeiro?
        if (*lista == NULL)
        {
            novo->proximo = NULL;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->valor != anterior);
        }
    }
    else
    {
        printf("Memória não alocada!");
    }
}
