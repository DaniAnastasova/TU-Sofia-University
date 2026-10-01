#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    
    double a;
    double b;
    
    printf("Въведете число: ");
    scanf("%lf", &a);

    printf("Въведете число: ");
    scanf("%lf", &b);

    double i = a;
    double result = 0;

    for(i; i <= b; i+=0.1)
    {
        result = (i*i) - 4;
        printf("%.2lf \n", result);
    }
}