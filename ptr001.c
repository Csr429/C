#include <stdio.h>
#include <stdlib.h>


int main()
{
    system("cls");

    short int i = 0;
    short int *ptr;

    ptr = &i;
    *ptr = 10;

    printf("\n endereco de i: %p", &i);
    printf("\n conteudo de i: %d", i);
    printf("\n endereco do ponteiro: %p", &ptr);
    printf("\n conteudo do ponteiro: %p", ptr);
    printf("\n conteudo do endereco do ponteiro: %d", *ptr);

    return 0;
}