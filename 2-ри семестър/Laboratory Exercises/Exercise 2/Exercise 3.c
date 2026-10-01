#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int a;
    int b;
    int c;

    printf("Въведете число: ");
    scanf("%d", &a);

    printf("Въведете число: ");
    scanf("%d", &b);

    printf("Въведете число: ");
    scanf("%d", &c);

    int minNum = 0;

    if(a < b){
        minNum = a;
        printf(minNum);
    }
    else if(a < c){
        minNum = a;
        printf(minNum);
    }
    else if(b < a){
        minNum = b;
        printf(minNum);
    }
    else if(b < c){
        minNum = b;
        printf(minNum);
    }
    else if(c < a){
        minNum = c;
        printf(minNum);
    }
    else if(c < b){
        minNum = c;
        printf(minNum);
    }
}