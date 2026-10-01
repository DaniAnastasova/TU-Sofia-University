#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int Len_word(char str[]){
    int i = 0;
    int count = 1;
    while(str[i] != '\0');{
        if(str[i] == ' ' || str[i] == '\n') {
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    char str[] = ".... .... ....";
    int result = Len_word(str);
    printf("%d", result);
}