/*
Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.
*/

#include <stdio.h>
#include <stdlib.h>

void preencher(short int *vet, short int tam);
void imprime(short int *vet, short int tam);

int main()
{
    system("cls");

    short int numeros[10];

    preencher(numeros, 10);

    imprime(numeros, 10);

    return 0;
}

void preencher(short int *vet, short int tam)
{

    for (int i = 0; i < tam; i++)
    {
        printf("\n Por favor, insira o %d numero: ", i);
        scanf("%hd", &vet[i]);
        fflush(stdin);
    }
}

void imprime(short int *vet, short int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("\n %d: endereco: %p valor: %hd", i, vet+i, *(vet + i));
    }
}
