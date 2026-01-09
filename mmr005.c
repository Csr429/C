#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int **vet;

    system("cls");
    srand(time(NULL));

    vet = calloc(4, sizeof(int *));

    for (int i = 0; i < 4; i++)
    {
        *(vet + i) = calloc(5, sizeof(int));
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            *(*(vet + i) + j) = rand() % 100;
        }
    }


    for (int i = 0; i<4; i++)
    {
        for(int j = 0; j<5; j++)
        {
            printf("%d ", *(*(vet+i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i<4; i++)
    {
        free(*(vet+i));
    }

    free(*vet);
}