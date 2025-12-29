/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void function(int vetor[], int tam, int *maior, int *menor);
void imprime(int *maior, int *menor);

int main()
{
    system("cls");
    int vet[10] = {2, 3, 5, 1, 9, 32, 52, 10, 78, 100};
    int tamanho = 10, maior = 0, menor = 2147483647;

    function(vet, tamanho, &maior, &menor);
    imprime(&maior, &menor);
    return 0;
}

void function(int vetor[], int tam, int *maior, int *menor)
{
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > *maior)
            *maior = vetor[i];
        if (vetor[i] < *menor)
            *menor = vetor[i];
    }
}

void imprime(int *maior, int *menor)
{
    printf("\n maior:%hd", *maior);
    printf("\n menor: %hd", *menor);
}