/*
O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg) pela altura (h em metros) elevada ao quadrado (IMC= m/h²). Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo com a tabela abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

//! Function Prototype
float wheight_input();
float height_input();
float imc_calculate(float height, float wheight);


int main()
{
    system("cls");

    float imc = 0;
    
    imc = imc_calculate(height_input(), wheight_input());
    printf("\n \t %.2f", imc);

    if (imc<18.5)
    {
        printf("\n \t Abaixo do peso");
    }
    else if (imc>=18.5 && imc < 25)
    {
        printf("\n \t Peso normal");
    }
    else if (imc>=25 && imc < 30)
    {
        printf("\n \t Sobrepeso");
    }
    else if (imc>=30 && imc < 35)
    {
        printf("\n \t Obesidade grau 1");
    }
    else if (imc>= 35 && imc < 40)
    {
        printf("\n \t Obesidade grau 2");
    }
    else if (imc>= 40 )
    {
        printf("\n \t Obesidade grau 3");
    }
    else
    {
        printf("\n \t Erro no valor do imc");
        return 0;
    }
    
    
}

float wheight_input()
{
    float f = 0;

    printf("\n \t Por favor, insira seu peso: ");
    scanf("%f", &f);

    return f;
}

float height_input()
{

    float f = 0;

    printf("\n \t Por favor, insira sua altura: ");
    scanf("%f", &f);

    return f;
}

float imc_calculate(float height, float wheight)
{
    float imc = wheight / (height * height);
    return imc;
}