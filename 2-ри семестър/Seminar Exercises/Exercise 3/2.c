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
        printf("Въведете число: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n-1; i++){
        if(i % 2 == 0 && arr[i] >= arr[i+1]){
            printf("No \n");
            return 0;
        }
        if(i%2 == 1 && arr[i] <= arr[i+1]){
            printf("No\n");
            return 0;
        }
        
    }
    printf("Yes");
}