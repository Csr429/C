/*
 Implemente uma função recursiva que receba um número inteiro e retorne a soma de todos os seus dígitos. Ex: 123 \to 1+2+3=6$.
*/

#include <stdio.h>
#include <stdlib.h>

int function(int i);

int main()
{
    int x = 0;
    system("cls");

    printf("\n Por favor, insira um número: ");
    scanf("%d", &x);

    printf("\n O valor da soma dos digitos e: %d", function(x));

    return 0;
}

int function(int i)
{
    if (i == 0)
    {
        return 0; 
    }
    else
    {
        return (i%10)+function(i/10);
    }
}

