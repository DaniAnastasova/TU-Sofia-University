#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

   int arr[4][5];

    int num = 0;

    for(int i = 0; i<4; i++){
        for(int j = 0; j <5; j++){
            printf("Въведете число: ");
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }

    int sum = 0;
    int sum_Min = 0;
    for(int i = 0; i < 4; i++){
        sum = 0;
        for(int j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
            sum+= arr[i][j];
        }
        printf("Сумата на реда е: %d\n", sum);

        if (i == 0) {
            sum_Min = sum;
        } 
        else if (sum < sum_Min) {
            sum_Min = sum; 
        }
    }
    printf("Минималната сума е: %d", sum_Min);
}