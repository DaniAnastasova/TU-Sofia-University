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

    int count_for_even_nums = 0;
    for(int i = 0; i < n; i++)
    {
        printf("Въведете стойност: ");
        scanf("%d", &num);
        arr[i] = num;
        if(num % 2 == 0){
            count_for_even_nums++;
        }
    }

    int final_res = 0;
    for(int i = 1; i<n; i+=2){
        if(arr[i] % 2 == 0){
            final_res++;
        }
    }

    printf("Брой на четните елементи на нечетни позиции: %d", final_res);

}