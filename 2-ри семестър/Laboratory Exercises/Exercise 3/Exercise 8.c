#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

double Sum(double a, double b, double c){
    double result = a + b + c;
    return result;
}

double MaxNum(double a, double b, double c){
    double maxNum = max(a,b);
    if(c > maxNum){
        return c;
    }
    else{
        return maxNum;
    }
}

double MinNum(double a, double b, double c){
    double minNum = min(a,b);
    if(c < minNum){
        return c;
    }
    else{
        return minNum;
    }
}

double AverageGrade(double a, double b, double c){
    double avrSum = (a+b+c) / 3;
    return avrSum;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    double a;
    double b;
    double c;

    printf("Въведете стойност: ");
    scanf("%lf", &a);

    printf("Въведете стойност: ");
    scanf("%lf", &b);

    printf("Въведете стойност: ");
    scanf("%lf", &c);

    printf("%.2lf \n", Sum(a,b,c));
    printf("%.2lf \n", MaxNum(a,b,c));
    printf("%.2lf \n", MinNum(a,b,c));
    printf("%.2lf", AverageGrade(a,b,c));
}