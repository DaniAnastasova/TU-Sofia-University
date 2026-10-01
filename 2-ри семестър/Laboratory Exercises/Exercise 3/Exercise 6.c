#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int Factorial(int num){
    if(num == 0){
        return 0;
    }
    else{
        int n = 1;
        for(int i = 1; i <= num; i++){
           n = n * i;
        }
        return n;
    }
    
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num;
    printf("Въведете число: ");
    scanf("%d", &num);

    printf("%d", Factorial(num));
}