/*
Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês Inválido’.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mounth = 0;

    system("cls");

    printf("\n \t Por favor, insira o numero referente a um mes: ");
    scanf("%d", &mounth);

    switch (mounth)
    {
    case 1:
        printf("\n \t Janeiro");
        break;
    case 2:
        printf("\n \t Fevereiro");
        break;
    case 3:
        printf("\n \t Março");
        break;
    case 4:
        printf("\n \t Abril");
        break;
    case 5:
        printf("\n \t Maio");
        break;
    case 6:
        printf("\n \t Junho");
        break;
    case 7:
        printf("\n \t Julho");
        break;
    case 8:
        printf("\n \t Agosto");
        break;
    case 9:
        printf("\n \t Setembro");
        break;
    case 10:
        printf("\n \t Outubro");
        break;
    case 11:
        printf("\n \t Novembro");
        break;
    case 12:
        printf("\n \t Dezembro");
        break;

    default:
        printf("\n \t O valor inserido e invalido!");
        break;
    }
}