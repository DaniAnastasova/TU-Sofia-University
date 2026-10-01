#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>


void Func(int a, int b, int c){
    double deskriminanta = (b*b) - 4 *a*c;
    double x1 = 0;
    double x2 = 0;
    if(deskriminanta < 0){
        printf("Няма решение!");
    }
    else if(deskriminanta == 0){
        x1 = -b / (2.0*a);
        printf("%lf", x1);
    }
    else{
        x1 = (-b + sqrt(deskriminanta)) / (2.0*a);
        x2 = (-b - sqrt(deskriminanta)) / (2.0*a);
        printf("%.2lf\n", x1);
        printf("%.2lf\n", x2);
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int a;
    int b;
    int c;

    printf("Въведете число: ");
    scanf("%d", &a);

    printf("Въведете число: ");
    scanf("%d", &b);

    printf("Въведете число: ");
    scanf("%d", &c);

    Func(a,b,c);
}
