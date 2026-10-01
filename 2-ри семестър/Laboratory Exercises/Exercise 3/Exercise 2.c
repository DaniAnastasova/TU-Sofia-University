#include <stdio.h>
#include <locale.h>
#include <Windows.h>

double Figure1(double x){
    double result;
    result = (x*x);
    return result;
}

double Figure2(double a, double b){
    double result;
    result = a * b;
    return result;
}

double Figure3(double c, double d){
    double result;
    result = c * d;
    return result;
    
}

double Figure4(double e)
{
    double result;
    result = 3.14 * (e*e);
    return result;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num;
    double a,b;
    double r;

    printf("Въведете число за желана фигура: ");
    scanf("%d", &num);

    printf("Въведете размери: ");
    scanf("%lf%lf", &a, &b);

    printf("Въведете радиус: ");
    scanf("%lf", &r);

    switch (num)
    {
    case 1:
        printf("%.2lf", Figure1(a));
        break;
    case 2:
        printf("%.2lf", Figure2(a, b));
        break;
    case 3:
        printf("%.2lf", Figure3(a,b));
        break;
    case 4:
        printf("%.2lf", Figure4(r));
        break;
    default:
        break;
    }
}