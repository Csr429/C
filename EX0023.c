/*
Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int valor1 = 0;
    int valor2 = 0;
    int valor_coringa = 0;

    printf("por favor, insisra um numero:");
    scanf("%d", &valor1);

    printf("\n Por favor, insira outro numero:");
    scanf("%d", &valor2);

    imprimirValores(valor1, valor2);

    // processando os dados

    valor_coringa = valor1;
    valor1 = valor2;
    valor2 = valor_coringa;

     imprimirValores(valor1, valor2);
}

void imprimirValores(int valor1, int valor2)
{
    printf("\n valor 1 = %d", valor1);
    printf("\n valor 2 = %d", valor2);
}