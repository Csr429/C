#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int vetor[5] = {0,1,2,3,4};

    printf("\n %p", vetor);
    printf("\n %p", &vetor);
    printf("\n %p", &vetor[0]);

    return 0;
}