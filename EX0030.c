/*
Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

int main()
{
    system("cls");

    char letra;

    printf("\n por favor, insira uma letra: ");
    scanf("%c", &letra);

    if (letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u')
    {
        printf("\n E uma vogal");
    }
    else
    {
        printf("\n E uma consoante");
    }
}