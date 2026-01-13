#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char text;
    system("cls");

    file = fopen("..\\files\\file02.txt", "w+");

    if (file)
    {
        printf("\n Por favor, insira um texto e pressione enter ao final. \n");
        scanf("%c", &text);

        while (text != '\n')
        {
            fputc(text, file);
            scanf("%c", &text);
        }

        rewind(file);

        while (!feof(file))
        {
            text = fgetc(file);
            printf("%c", text);
        }

        fclose(file);
    }
    else
    {
        printf("\n Falha ao ler o arquivo");
    }

    return 0;
}