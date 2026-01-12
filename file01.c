#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    FILE *file;

    system("cls");

    file = fopen("..\\files\\file01.txt", "w");
    if (file)
    {
        printf("\n Insira um texto e pressione enter ao finalizar. \n");
        scanf("%c", &letra);
        while (letra != '\n')
        {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }
    else
    {
        printf("Erro ao abrir o arquivo");
    }

    return 0;
}