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
    int sum = 0;
    int count_elements = 0;
    int average = 0;


    int num = 0;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Въведете число: ");
            scanf("%d", &num);
            arr[i][j] = num;
            if((i+j) != 0){
                if(num % (i+ j) == 0){
                sum += num;
                count_elements++;
                }
            }
        }
    }

    if(count_elements != 0){
        average = sum / count_elements;
        printf("Средно аритметичното е: %d", average);
    }

}