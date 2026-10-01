#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    char ch;
    printf("Въведете символ: ");
    scanf(" %c", &ch); 
    int n = 9;


    for(int i = 1; i <= n; i++){
        for(int x = 1; x <= 2*n-1; x++){
            if(x == n-i+1 || x == n + i -1 || i == n) {
                printf("%c", ch);
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }

    printf("\n");

    for(int i = n; i >= 1; i--){
        for(int x = 1; x <= 2*n-1; x++){
            if(x == n-i+1 || x == n + i -1 || i == n) {
                printf("%c", ch);
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}