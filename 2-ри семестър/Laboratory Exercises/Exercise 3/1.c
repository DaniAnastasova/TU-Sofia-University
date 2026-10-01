#include <stdio.h>
#include <locale.h>
#include <Windows.h>

float Sum(float a, float b){
    float result;
    result = a+b;
    return result;
}

float Sum1(float x, float y); //декларация на функцията (прототип на функцията)

// Пример 1
int Max(int, int);

int main()
{
    //функции - изнесено парче код, което дава някакъв резултат и изпълнява конкретна задача.
    // вградени функции - вече създадени, използваме на готово
    // потребителски функции 
    // при тип void няма return на функцията 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    float arg1;
    float arg2;
    printf("Въведете число: ");
    scanf("%f", &arg1);

    printf("Въведете число: ");
    scanf("%f", &arg2);
    printf("%.2f \n", Sum(arg1, arg2));


    float x;
    float y;
    printf("Въведете число: ");
    scanf("%f", &x);

    printf("Въведете число: ");
    scanf("%f", &y);
    printf("%.2f \n", Sum1(x,y));


    int a;
    int b;
    printf("Въведете число: ");
    scanf("%d", &a);

    printf("Въведете число: ");
    scanf("%d", &b);

    printf("%d", Max(a,b));

}

// Дефиниция на функцията
float Sum1(float x, float y){
        float r;
        r = x+ y;
        return r;
    }

// Пример 1
int Max(int a, int b){
    int result;

    if(a>b){
        result = a;
    }
    else{
        result = b;
    }
    return result;
}

