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

    int k;
    printf("Въведете стойност: ");
    scanf("%d", &k);

    int arr[n];
    for(int i = 0; i < n-1; i++){
        printf("Въведете стойност: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[k-1]);
}