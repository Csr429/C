//! Exercício de incrementação e decrementação
#include <stdio.h>

int main()
{
    int n = 10;

    printf("\n Contador original: %d", n);
    printf("\n incrementando antes: %d", ++n);
    printf("\n Valro atual: %d", n);
    printf("\n incrementando depois: %d ", n++);
    printf("\n Valor atual: %d", n);

    printf("\n Pressione qualquer tecla!");
    getchar();
}