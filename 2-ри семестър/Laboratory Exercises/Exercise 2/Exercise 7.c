#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num = 10;
    do
    {
        printf("%d \n", num);
        num++;
    }
    while (num <= 20);
    
}