/*
O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura = 0;
    float peso = 0;
    float imc = 0;

    printf("\n Por favor, insira sua altura:");
    scanf("%f", &altura);

    printf("\n Por favor, insira sua peso:");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        printf("\n Abaixo do peso");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("\n Peso normal");
    }
    else if (imc >= 25 && imc < 30 )
    {
        printf("\n sobrepeso");
    }
    else if(imc >= 30 && imc < 35 ){
        printf(" \n obesidade nivel 1");
    } else{
        printf("\n obesidade");
    }

    return 0;
}