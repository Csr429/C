/*
Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8% para imposto de renda.
*/

#include <stdio.h>
#include <stdlib.h>

//! constant's declaration
#define taxes 00.8
#define job 45

//! Function's prototype
int daysInput();

int main()
{
    system("cls");

    //? Variables:
    short int days = 0;
    float result = 0;


    days = daysInput();
    result = (days * job);
    result = result - (result * taxes);

    printf("\n Valor liquido e: %.2f", result);
}

int daysInput()
{
    int i = 0;

    printf("\n Por favor, insira o numero de dias trabalhados: ");
    scanf("%d", &i);

    return i;
}
