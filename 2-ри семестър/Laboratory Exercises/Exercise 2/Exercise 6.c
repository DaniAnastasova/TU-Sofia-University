#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int i = 10;
    for(i; i <= 20; i++)
    {
        printf("%d \n", i);
    }
    
    int a = 10;
    while(a <= 20)
    {
        printf("%d \n", a);
        a++;
    }
}
