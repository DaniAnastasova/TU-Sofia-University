#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    
    int *arr = NULL;
    int br;

    arr = input(&br,arr);
    out(br, arr);

    printf("%d", Sum(br, arr));

}

int* input(int *br, int *mas){
    int n;

    *br = 0;
    do{
        printf("Въведете число: ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        (*br)++;

        mas = (int*)realloc(mas, *br * sizeof(int));
        mas[*br - 1] = n;
    }while(1);

    return mas;
}

void out(int br, int *mas){
    for(int i = 0; i < br; i++){
        printf("[%d] = %d",i, *(mas+i));
    }
}

int Sum(int br, int *mas){
    int sum = 0;
    int a = 0;
    int b = 0;

    printf("Въведете начална стойност на интервала: ");
    scanf("%d", &a);

    printf("Въведете крайна стойност на интервала: ");
    scanf("%d", &b);

    for(int i = 0; i < br; i++){
        if (mas[i] >= a && mas[i] <= b) {
            sum += mas[i];
        } 
    }
    return sum;
}
