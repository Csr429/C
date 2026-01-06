#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a = 0, *b, **c;
    a = 6102000;
    b = &a;
    c = &b;



    printf("\n a - valor: %d enderco: %p", a, &a);
    printf("\n b - conteudo de b: %p conteudo da variavel apontada por b: %d  endereco de b: %p ", b, *b, &b);
    printf("\n c - valor: %d endereco: %p *c:%p **c:%d", **c, &c, *c, **c);
    return 0;
}