#include <stdio.h>
#include <stdlib.h>

void maiorMenor (int *vet, int tam, int *menor, int*maior){
    *menor = *vet;
    *maior = *vet;

    for(int i = 1; i<tam; i++)
    {
        if(*menor> *(vet+i))
        {
            printf(" \n loop %d", i);
            *menor = *(vet + i);
        }

        if(*maior< *(vet+i))
        {
            *maior = *(vet + i);
        }
    }
}

int main()
{
    int menor, maior, v[11] = {45, 89,69,23,14,75,2,45,100,58,1000};
    printf("Menor: %d \t Maior: %d \n", menor, maior);
    maiorMenor(v,10,&menor, &maior);
    printf("Menor: %d \t Maior: %d \n", menor, maior);
}