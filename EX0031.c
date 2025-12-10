/*
Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/
#include <stdio.h>
#include <stdlib.h>
#define tamanho 3

float coleta(float *x);

int main()
{

    int choose = 0;
    float notas[tamanho];
    float media = 0;
    int ponderada[tamanho] = {3, 3, 4};

    do
    {
        system("cls");
        printf("\n Por favor, escolha o tipo de media que deseja: ");
        printf("\n 1 - Aritmetica");
        printf("\n 2 - ponderada");
        printf("\n 3 - sair");
        fflush(stdin);
        scanf("%d", &choose);
        system("pause");

        switch (choose)
        {
        case 1:
            coleta(&notas[0]);
            for (int x = 0; x < tamanho; x++)
            {
                media = media + notas[x];
                media = media / 3;
                printf("\n media = %.2f", media);
            }

            break;
        case 2:
            coleta(&notas[0]);
            for (int x = 0; x < tamanho; x++)
            {
                for (int z = 0; z < tamanho; z++)
                {
                    media = (notas[x] * ponderada[x]) + media;
                }
                printf("\n media = %10.0f", media);
            }
            break;

        default:
            printf("\n Valor invalido!");
            break;
        }
    }

    while (choose != 3);
    fflush(stdin);
    choose = 0;
}

float coleta(float *x)
{

    for (int y = 0; y < tamanho; y++)
    {
        printf("\n Por favor, insira a %dº nota: ", y);
        scanf("%f", &x[y]);
    }

    return 0;
}