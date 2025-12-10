#include <stdio.h>
#include <stdlib.h>

/*
    Aula para leitura de entradas
*/

int main(){
    char sexo[2];
    int idade;
    float peso;
    float altura;

    system("cls");

    printf("\n Por favor, insira o seu sexo (M - masculino, F - feminino): ");
    fgets(sexo, sizeof(sexo), stdin);
    
    printf("\n Por favor, insira sua idade: ");
    scanf("%d", &idade);

    printf("\n Por favor, insira seu peso: ");
    scanf("%f", &peso);

    printf("\n Por favor, insira sua altura: ");
    scanf("%f", &altura);

    printf("\n Sexo: %s", sexo);
    printf("\n Idade: %d", idade);
    printf("\n peso: %.2f", peso);
    printf("\n altura: %.2f", altura);

    printf("\n Pressione qualquer tecla!");
    getchar();
}