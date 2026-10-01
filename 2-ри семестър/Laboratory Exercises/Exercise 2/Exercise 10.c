#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int a;
    int b;

    printf("Въведете число: ");
    scanf("%d", &a);

    printf("Въведете число: ");
    scanf("%d", &b);

    int sumEvenNums = 0;
    int multuplyOddNums = 1;

    int i = a+1;
    for(i; i < b; i++)
    {
        if(i%2 ==  0)
        {
            sumEvenNums += i;
        }
        else{
            multuplyOddNums*= i;
        }
    }
    printf("%d \n", sumEvenNums);
    printf("%d", multuplyOddNums);

}