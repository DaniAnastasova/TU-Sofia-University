#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    
    int a;
    printf("Въведете число: ");
    scanf("%d", &a);
    
    if((a%8)> 4)
    {
        printf("....");
    }
}