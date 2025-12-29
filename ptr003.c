#include <stdio.h>
#include <stdlib.h>

void funcao(int *prt);

int main()
{
    system ("cls");

    int i = 9;

    printf("\n Valor antes de passar pela função: %d",i);
    
    funcao(&i);

    
    printf("\n Valor depois de passar pela função: %d",i);

    return 0;
}

void funcao(int *prt)
{
  *prt=*prt+10;
}