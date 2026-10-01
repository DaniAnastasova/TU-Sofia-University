#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int x;
    printf("Въведете брой редове: ");
    scanf("%d", &x);

    int y;
    printf("Въведете брой колони: ");
    scanf("%d", &y);
    
    int arr[100][100];

    int num = 0;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("Въведете число: ");
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(j < y - 1) { 
                if(arr[i][j] < arr[i][j+1]){
                    printf("Числата са подредени в нарастващ ред в редовете\n");
                }
                else{
                    printf("Числата НЕ са подредени в нарастващ ред в редовете\n");
                }
            }
        }
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(i < x - 1) { 
                if(arr[i][j] > arr[i+1][j]){
                    printf("Числата са подредени в намаляващ ред в колоните\n");
                }
                else{
                    printf("Числата НЕ са подредени в намаляващ ред в колоните\n");
                }
            }
        }
    }
    return 0;
}