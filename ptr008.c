/*
Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    short int a = 0, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("\n Por favor, insira um numero: ");
    scanf("%hd", &a);

    printf("\n O dobro de %hd e: %hd", a, 2 * *b);
    printf("\n O triplo de %hd e: %hd", a, 3 * **c);
    printf("\n O quadruplo de %hd e: %hd", a, 4 * ***d);


    return 0;
}
