/*
Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

#include <stdio.h>
#include <stdlib.h>
#define conversao 5.30

float coleta();

int main()
{
    system("cls");

    float dinheiro = 0;
    int choose = 0;

    do
    {
        printf("\n 1 Real --> dolar");
        printf("\n 2 dolar --> real");
        printf("\n 3 sair \n");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            dinheiro = coleta();
            dinheiro = dinheiro / conversao;
            printf("\n $: %.2f", dinheiro);
            break;

        case 2:
            dinheiro = coleta();
            dinheiro = dinheiro * conversao;
            printf("\n R$: %.2f", dinheiro);
            break;

        case 3:
            return 0;

        default:
            printf("\n Escolha invalida");
            break;
        }
    } while (choose != 3);

    fflush(stdin);
    choose = 0;
    return 0;
}

float coleta()
{
    float x = 0;
    printf("\n Por favor, insira o valor que deseja converter: ");
    scanf("%f", &x);
    return x;
}
