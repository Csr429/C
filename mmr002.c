#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam = 0, *vet;

    system("cls");
    srand(time(NULL));

    printf("\n Por favor, insira o tamanho do vetor desejado: ");
    scanf("%d", &tam);
    vet = calloc(tam, sizeof(int));

    vet ? printf("Vetor alocado com sucesso") : printf("vetor não alocado");

    for (int i = 0; i < tam; i++)
    {
        *(vet+i) = rand() % 100; 
    }

    for (int i = 0; i < tam; i++)
    {
        printf("\n O %d valor e: %d", i, *(vet+i));
    }

    return 0;
}