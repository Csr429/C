#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("cls");

    char palavra[50] = {"Bom dia, simpatia!"};
    char str[] = {"dia"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);

    if(ponteiro){
        printf("\n %c%c%c\n", *ponteiro, *(ponteiro+1), *(ponteiro+2));
    } else {
        printf("\n Ponteiro nulo");
    }

    return 0;
}