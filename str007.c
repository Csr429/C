#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("cls");

    char palavra1[50] = ("oi.");

    strcat(palavra1, " Bom dia!");

    printf("\n \t %s \n ", palavra1);

    return 0;
}