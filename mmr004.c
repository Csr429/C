#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int l = 0, c = 0, **vet; 

    system("cls");
    srand(time(NULL));
    
    pritnf("\n Por favor, insira o numero de colunas que a matriz devera ter: ");
    scanf("%d", &c);

    printf("\n Por favor insira o numero de linhas que a matriz devera ter: ");
    scanf("%d", &l);

    for(int i = 0; i<l; i++)
    {
       **vet = calloc(c, sizeof(int));
    }

    // preenchendo
    for (int i = 0; i<l; i++)
    {
        for(int x = 0; x<c; x++)
        {
            
        }
    }



     

    return 0;
}