#include <stdio.h>
#include <stdlib.h>

int fn(int x);

int main()
{
    int c = 0;

    system("cls");

    printf("\n \t Por favor, insira um numero: ");
    scanf("%d", &c);

    c = fn(c);

    printf("\n %d", c);
    
}

int fn(int x)
{
    
    if(x==1){
        printf("\n ponto final");
        return 1;
    } else {
        printf("\n 1: %d", x);
        x = x * fn(x-1);
        printf("\n 2: %d", x);
        return x; 
    }


}