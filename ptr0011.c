#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, *y, **z;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *b, **c;

    system("cls");

    x = 96;
    y = &x;
    z = &y;

    b = a;
    c = &b;

    printf("\n x = %d", x);
    printf("\n y: * = %d y=%p", *y, y);
    printf("\n **= %d * = %p z = %p", **z, *z, z);

    for (int i = 0; i < 10; i++)
    {
        printf("\nteste\n ");
        printf("%d: %d", i, **c);
    }
}