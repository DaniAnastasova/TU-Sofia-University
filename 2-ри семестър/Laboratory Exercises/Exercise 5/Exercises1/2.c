#include <stdio.h>
#include <locale.h>
#include <Windows.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num1;
    int num2;

    printf("Въведете стойност: ");
    scanf("%d", &num1);

    printf("Въведете стойност: ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = *(ptr1)+*(ptr2);
    int result = *(ptr1)-*(ptr2);

    int res2 = 0;
    if(*(ptr2) != 0){
        res2 = *(ptr1) / *(ptr2);
    }
    else{
        printf("*(ptr2) = 0");
    }
    int res3 = (*(ptr1))* (*(ptr2));

    printf("Сумата е: %d\n", sum);
    printf("Разликата е: %d\n", result);
    printf("Делението е: %d\n", res2);
    printf("Умножението е: %d\n", res3);


}