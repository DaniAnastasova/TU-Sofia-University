#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int n;
    printf("Въведете брой на елементите: ");
    scanf("%d", &n);

    int arr[100];
    int num = 0;

    int arr2[100];

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        printf("Въведете четирицифрено число: ");
        scanf("%d", &num);
        arr[i] = num;
        num1 = arr[i] / 1000;
        num2 = arr[i] / 100 % 10;
        num3 = arr[i] / 10 % 10;
        num4 = arr[i] % 10;
        sum = num1+num2+num3+ num4;
        arr2[i] = sum;
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", arr2[i]);
    }
}