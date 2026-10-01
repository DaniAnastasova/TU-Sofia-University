#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int n;
    printf("Въведете брой на елементите: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    int num = 0;

    for(int i = 0; i < n; i++){
        printf("Въведете стойност: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    int countNum = 0;
    for(int i =  0; i < n; i++){
        if((arr[i] != 1 && arr[i] != 2) && (arr[i] % 2 == 0 || arr[i] % 3 == 0))
        {
            countNum++;
        }
    }

    int* ptr = (int*)malloc((n - countNum) * sizeof(int));

    int j = 0;

    for(int i =  0; i < n; i++){
        if((arr[i] == 2) || (arr[i] != 1 && arr[i] % 2 != 0 && arr[i] % 3 != 0))
        {
            ptr[j++] = arr[i];   
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    for(int i = 0; i < j; i++){
        printf("%d ", ptr[i]);
    }
}