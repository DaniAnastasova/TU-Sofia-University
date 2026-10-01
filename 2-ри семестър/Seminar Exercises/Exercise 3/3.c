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

    int arr[n];
    int len = sizeof(arr)/sizeof(int);
    for(int i = 0; i < len; i++){
        printf("Въведете стойност: ");
        scanf("%d", &arr[i]);
    }

    int arr2[n];
    for(int x = len - 1; x > len; x--){
        for(int i = 0; i < len; i++){
            arr[x] = arr[i];
        }
    }

    for(int i = 0; i < len; i++){
        printf("%d", arr[i]);
    }
    for(int i = 0; i < len; i++){
        printf("%d", arr2[i]);
    }
}