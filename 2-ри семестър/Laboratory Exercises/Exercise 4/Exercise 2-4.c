#include <stdio.h>
#include <locale.h>
#include <Windows.h>

void Func(char str1[], char str2[]){
    int i = 0;
    int len1 = 1;
    int len2 = 1;
    while(str1[i] != '\n');{
        i++;
        len1++;
    }
    while(str2[i] != '\n');{
        i++;
        len2++;
    }

    if(len1 > len2){
        printf("%d", len1);
    }
    else{
        printf("%d", len2);
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    char str1[] = "string";
    char str2[] = "str";

    Func(str1, str2);
}