/*
Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//! Portótipos: 
int coletaDespesa();
int coletaNumeroPessoas();
int coletaGorjeta();

int main()
{

    system("cls");

    //! Variaveis:
    int bill = 0, people = 0, tip = 0; 
    float check = 0;

    bill = coletaDespesa();
    people = coletaNumeroPessoas();
    tip = coletaGorjeta();

    check = ((tip/100.0)*bill + bill)/people;

    printf("\n %0.2f", check);
    
    printf("\n bill: %d", bill);
    printf("\n people: %d", people);
    printf("\n tip: %d", tip);

    printf("\n The bill is %0.2f for each one", check);

}

int coletaDespesa()
{
    int i = 0;

    printf("\n Por favor, insira a conta: ");
    scanf("%d", &i);

    return i;
}

int coletaNumeroPessoas()
{
    int i = 0;

    printf("\n Por favor, insira o numero de pessoas que dividirao a conta: ");
    scanf("%d", &i);

    return i;
}

int coletaGorjeta()
{
    int i = 0;

    printf("\n Por favor, insira a taxa de gorjeta em porcentagem: ");
    scanf("%d", &i);

    return i;
}