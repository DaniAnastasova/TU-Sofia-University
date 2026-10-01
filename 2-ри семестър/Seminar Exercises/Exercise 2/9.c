#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int area;
    int yKilogram;
    int zLiter;

    printf("Въведете площ: ");
    scanf("%d", &area);

    printf("Въведете колко килогрлама грозде се изкарват за 1 кв.м.: ");
    scanf("%d", &yKilogram);

    printf("Въведете желано количество вино за продан: ");
    scanf("%d", &zLiter);

    int rekolta = area * yKilogram;
    double rekoltaForvine = 0.40 * rekolta;

    double perLitter = 2,5;
    





}
