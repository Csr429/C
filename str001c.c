#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    char str[11] = "Meu string";
    char novo = '!';
    int findEnd;

    printf("%s \n", str);

    findEnd = 0;
    while (str[findEnd] != '\0')
        findEnd++;
    str[findEnd] = novo;
    str[findEnd + 1] = '\0';

    printf("%s \n", str);

    system("pause");
    return 0;
}