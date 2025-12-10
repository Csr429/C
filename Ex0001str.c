#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    printf("%d\n", strcmp("a", "A"));
    printf("a=%d \n", 'a');
    printf("A=%d \n", 'A');

    system("pause");
    return 0; 
}