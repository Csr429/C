#include <stdio.h>
#include <stdlib.h>

// fórmula de fibonacci: F(n+2) =F(n+1)+F(n)

int fibonacci(int x);

int main()
{
    int i = 0;

    system("cls");

    printf("\n Por favor, insira a posição que deseja saber o valor: ");
    scanf("%d", &i);

    printf("%d", fibonacci(i));

    return 0;
}

int fibonacci(int x)
{
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;
    else
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

