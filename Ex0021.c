#include <stdio.h>
#include <stdlib.h>

/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/
void procedimento(int *vet, int t, int *menor, int *maior);

int main()
{
    system("cls");

    int maior = 0;
    int menor = 0;
    int teste[10] = {1000, 2, 3, 4, 5, 100, 5, -2, 18, 20};
    procedimento(teste, 10, &menor, &maior);
    printf("\n O maior: %d", maior);
    printf("\n O menor: %d", menor);
}

void procedimento(int *vet, int t, int *menor, int *maior)
{
    *menor = *vet;
    *maior = *vet;

    printf("\n + : %d", *maior);
    printf(" - : %d", *menor);

    for (int i = 1; i < t; i++)
    {

        if (*maior < vet[i])
        {
            *maior = vet[i];
        }

        if (*menor > vet[i])
        {
            *menor = vet[i];
        }
    }
    printf("\n + : %d", *maior);
    printf(" - : %d", *menor);
}