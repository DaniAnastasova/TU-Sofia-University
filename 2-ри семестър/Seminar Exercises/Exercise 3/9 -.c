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
    for(int i = 0; i < n; i++){
        printf("Въведете стойност: ");
        scanf("%d", &arr[i]);
    }

    
}