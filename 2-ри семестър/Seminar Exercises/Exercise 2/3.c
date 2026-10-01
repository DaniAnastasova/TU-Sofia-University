#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num;
    double bonus = 0;
    double result = 0;
    printf("Въведете число: ");
    scanf("%d", &num);

    if(num <= 100){
        bonus = 5; 
        if(num%2 == 0){
            bonus++;
        }
        if(num%10 == 5){
            bonus += 2;
        }
        result = num + bonus;
        printf("%.1lf \n", bonus);
        printf("%.1lf", result);
    }
    else if(num > 1000){
        bonus = 0.10 * num;
        if(num%2 == 0){
            bonus++;
        }
        if(num%10 == 5){
            bonus += 2;
        }
        result = num + bonus;
        printf("%.1lf \n", bonus);
        printf("%.1lf", result);
    }
    else if (num > 100 && num <= 1000)
    {
        bonus = 0.20 * num;
        if(num%2 == 0){
            bonus++;
        }
        if(num%10 == 5){
            bonus += 2;
        }
        result = num + bonus;
        printf("%.1lf \n", bonus);
        printf("%.1lf", result);
    }
      
}