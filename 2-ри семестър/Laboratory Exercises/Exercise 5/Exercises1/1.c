#include <stdio.h>
#include <locale.h>
#include <Windows.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int var;
    printf("Въведете число: ");
    scanf("%d", &var);

    int *ptr = &var;

    printf("Адрес: %x \n", &ptr);
    printf("Стойност на променливата: %d\n", *ptr);


}