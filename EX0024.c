/*
Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/

int main()
{
    int valor1 = 0;
    int valor2 = 0;

    valor1 = coleta();
    valor2 = coleta();

    imprimir_valores(valor1, valor2);
    // processando dados:
    valor2 = (valor1 * valor2);
    valor1 = valor2 / valor1;
    valor2 = valor2 / valor1;

    imprimir_valores(valor1, valor2);
}

void imprimir_valores(int x, int y)
{
    printf("\nvalor da variavel 1: %d", x);
    printf("\nvalor da variavel 2: %d \n", y);
}

int coleta()
{
    int x = 0;
    printf("Por favor, insira um numero: ");
    scanf("%d", &x);
    return x;
}