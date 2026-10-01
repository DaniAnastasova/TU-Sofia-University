#include <stdio.h>
#include <locale.h>
#include <Windows.h>

double Sum(double num){
    double result;
    result = 5 + num;
    return result;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    double num;
    printf("Въведете число: ");
    scanf("%lf", &num);

    printf("%.2lf", Sum(num));

}