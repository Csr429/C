/*
 uma função que calcule a soma dos elementos de um vetor
*/

#include <stdio.h>
#include <stdlib.h>

int function(int vetor[], int posicao);

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    system("cls");

    printf("%d", function(vetor, 10));

    return 0;
}

int function(int vetor[], int posicao)
{
    if (posicao == 0)
        return 0;
    else

        return vetor[posicao - 1] + function(vetor, posicao - 1);
}