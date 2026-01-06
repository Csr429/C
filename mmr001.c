#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int *ptr, *ptr2;

    ptr = malloc(sizeof(int));

    printf("\n o valor na memoria e: %d", *ptr);
    *ptr = 50;
    printf("\n o valor na memoria e: %d", *ptr);

    free(ptr);

    ptr2 = calloc(1,sizeof(int));

    printf("\n o valor na memoria e: %d", *ptr2);
    *ptr = 50;
    printf("\n o valor na memoria e: %d", *ptr2);

    free(ptr2);

    return 0;
}