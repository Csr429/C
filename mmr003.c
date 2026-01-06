#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam = 0, *vet, tam2 = 0;

    system("cls");
    srand(time(NULL));

    printf("\n Por favor, insira um tamanho para o vetor: ");
    scanf("%d", &tam);
    vet = calloc(tam, sizeof(int));

    vet ? printf("\n Vetor alocado com sucesso!") : printf("\n Falha ao alocar o vetor");

    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = rand() % 100;
    }

    for (int i = 0; i < tam; i++)
    {
        printf("\n o %d valor e: %d", i, *(vet + i));
    }

    printf("\n Agora, por favor insira um acrecimo para valor para o vetor: ");
    scanf("%d", &tam2);

    vet = realloc(vet, (tam + tam2));
    vet ? printf("\n Vetor alocado com sucesso!") : printf("\n Falha ao alocar o vetor");


    for (int i = 0; i < (tam + tam2); i++)
    {
        *(vet + tam + tam2) = rand() % 100;
    }

    for (int i = 0; i < tam + tam2; i++)
    {
        printf("\n o %d valor e: %d", i, *(vet + i));
    }

    return 0;
}