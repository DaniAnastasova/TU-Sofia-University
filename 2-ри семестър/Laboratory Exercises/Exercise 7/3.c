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

    for(int i = 0; i < n; i++)
    {
        printf("Въведете число: ");
        scanf("%d", &num);

        arr[i] = num;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr2[i] = arr[i];
        }
        else{
            arr2[i] = arr[i+1];
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }
}