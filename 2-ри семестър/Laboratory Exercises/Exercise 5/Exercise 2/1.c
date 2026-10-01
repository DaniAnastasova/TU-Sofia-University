#include <stdio.h>
#include <locale.h>
#include <Windows.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int r,c;
    printf("Въведете стойности: ");
    scanf("%d%d", &r,&c);

    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Row: %d, Col:%d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    //Главен диагонал
    printf("Главен диагонал\n");
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
          if(i == j){
            printf("Element: %d\n", arr[i][j]);
            }
       }
    }

    //Второстепенен диагонал
    printf("Второстепенен диагонал\n");
    for(int x = 0; x < r; x++){
        for(int y = 0; y < c ; y++){
            if(y == c - x - 1){
                printf("Element: %d\n", arr[i][j]);
            }
        }
    }

    //Елементи над главния диагонал
    for(int a = 0; a < r; a++){
        for(int b = 1; b < c; b++){
            if(b>a){
                printf("Element: %d\n", arr[i][j]);
            }
            
        }
    }

    //Елементи под главен диагонал
    for(int d = 1;  d < r; d++){
        for(int e = 1; e < c; e++){
            printf("Element: %d\n", arr[i][j]);
        }
    }


    return 0;
}
