/*
Exercício 3: Soma dos Elementos de um Array
Objetivo: Aplicar a recursão para processar uma estrutura de dados (array).

Descrição: Implemente uma função recursiva que calcule a soma de todos os elementos em um array de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int recursao(int arr[], int tamanho);

int main()
{
    system("cls");
    int i[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    soma = recursao(i,5);

    printf("a soma total do vetor é: %d", soma);

    return 0;
}

int recursao(int arr[], int tamanho)
{
    if (tamanho <= 0)
    {
        return 0;
    }
    else
    {
        return arr[tamanho - 1] + recursao(arr, tamanho-1);

    }
}