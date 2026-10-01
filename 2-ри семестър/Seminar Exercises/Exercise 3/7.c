#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int n;
    printf("Въведете стойност: ");
    scanf("%d", &n);

    int num;
    printf("Въведете стойноста на сбора: ");
    scanf("%d", &num);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Въведете стойност: ");
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        if(arr[i]<num){
            sum += arr[i];
            if(sum < num){
                continue;
            } 
            printf("%d", arr[i]);
        }
    }
}