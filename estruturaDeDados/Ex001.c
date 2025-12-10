#include <stdio.h>
#include <locale.h>

typedef struct date
{
    int day, mouth, year;
} date;

typedef struct person
{
    char name[50];
    int genere;
    char CPF[10];
} person; 

typedef struct no
{
    int data;
    struct no *proximo; 
} no;

int
main(void)
{
    setlocale(LC_ALL, "");
    system("cls");
}