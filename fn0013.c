/*
desenvolva recursiva que retorne o maior numero de um array
*/

#include <stdio.h>
#include <stdlib.h>

int function(int arry[], int x, int y);

int main()
{
#define tamanho 10
    int vetor[tamanho] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d", function(vetor, tamanho, 0));

    return 0;
}

int function(int arry[], int x, int y)
{
        if( x == 0)
        return y ;
        else
            x>(x-1)? return function(arry, x-2):return function(arry, x-2)
        return 
}


/*
x>(x-1)?x:(x-1);



*/