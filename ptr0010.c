#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, *ptr, **pptr;

    system("cls");

    x = 2;
    z = 6;
    y = &x;
    ptr = &x;

    printf("x - Valor de x: %d, endereco de x: %p", x, &x);
    printf("\n y - %d, %x", y, y);

    pptr = &ptr;

    printf("\n %d", *ptr);
    printf("\n %d", *pptr);
    printf("\n %d", **pptr);
}