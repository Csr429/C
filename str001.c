#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    char str1[11] = "Meu string";
    char novo = '!';

    printf("%s", str1);

    int find;

    find = 0;
    while (str1[find] != '\0')
        find++;

    str1[find] = novo;

    str1[find + 1] = '\0';

    printf("\n %s \n ", str1);

    system("pause");
    return 0;
}