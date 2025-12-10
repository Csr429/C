/*
Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype
float get_valor();

int main()
{
    system("cls");

    float valor = 0;
    int choose = 0;
    #define coeficienteDeConversao  5.3

    do
    {
        system("cls");
        printf("\n \t Por favor, escolha a opcao desejada: ");
        printf("\n 0 - Sair");
        printf("\n 1 - Reais -> Dolares");
        printf("\n 2 - Dolares -> Reais");
        printf("\n escolha: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            valor = get_valor();
            valor = valor / coeficienteDeConversao;
            printf("\n \t $: %.2f \n", valor);
            system("pause");
            break;
        
        case 2: 
            valor = get_valor();
            valor = valor * coeficienteDeConversao;
            printf("\n \t R$: %.2f \n", valor);
            system("pause");
            break;
            
        default:
            break;
        }
    } while (choose!=0);
    
    
}

float get_valor()
{
    float f;

    printf("\n \t Por favor, insira o valor a ser convertido: ");
    scanf("%f", & f);
    return f;

}
