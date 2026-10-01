#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num1;
    int num2;
    int num3;

    printf("Въведете число: ");
    scanf("%d", &num1);

    printf("Въведете число: ");
    scanf("%d", &num2);

    printf("Въведете число: ");
    scanf("%d", &num3);

    if(num1 == num2)
    {
        if(num1 == num3){
            printf("yes");
        }
        
    }
    else{
        printf("no");
    }

}