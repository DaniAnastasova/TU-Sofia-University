#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int a,b;
    printf("Въведете стойност за а: ");
    scanf("%d", &a);

    printf("Въведете стойност за b: ");
    scanf("%d", &b);

    int arr[100][100];
    int arr2[100];

    int num = 0;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Въведете число: ");
            scanf("%d", &num);
            arr[i][j] = num;
            if(num < 0){
                arr2[i] = num;
            }
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(int i = 0; i < a; i++){
        printf("%d ", arr2[i]);  
    }
}