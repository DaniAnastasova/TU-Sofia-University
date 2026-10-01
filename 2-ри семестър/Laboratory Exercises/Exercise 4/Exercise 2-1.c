#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int len(char str[] ){
    int i = 0;
    while(str[i] != '\0');{
        i++;
    }
    return i;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    char str[] = "String";
    int result = len(str);
    printf("%d", result);
}