#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    float *prices = NULL;
    int *quantities = NULL;

    int n1;
    printf("Въведете размер: ");
    scanf("%d", &n1);

    prices = (float*)malloc(n1*sizeof(float));
    quantities = (int*)malloc(n1*sizeof(int));

    float num = 0;
    for(int i = 0; i < n1; i++){
        printf("Въведете стойност: ");
        scanf("%f", &num);
        prices[i] = num;
    }

    printf("\n");
    int num1 = 0;
    for(int i = 0; i < n1; i++){
        printf("Въведете стойност: ");
        scanf("%d", &num1);
        quantities[i] = num1;
    }

    int sum = 0;
    for(int i = 0;i < n1; i++){
        sum = prices[i] + quantities[i];
        printf("%d", sum);
        sum = 0;
    }

    int m;
    printf("Въведете m брой за добавяне на елементи: ");
    scanf("%d", &m);

    prices = (float*)realloc(prices, (n1+m) * sizeof(float));
    quantities = (int*)realloc(quantities, (n1+m) * sizeof(int));

    float num2 = 0;
    for(int i = n1; i < (n1+m); i++){
        printf("Въведете стойност: ");
        scanf("%f", &num);
        prices[i] = num;
    }

    int num3 = 0;
    for(int i = n1; i < (n1+m); i++){
        printf("Въведете стойност: ");
        scanf("%d", &num1);
        quantities[i] = num3;
    }

    int min_sum = prices[0];
    for(int i = 1; i<(n1+m); i++){
        if(prices[i] < min_sum){
            prices[i] = min_sum;
        }
    }
    
}