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

    printf("Въведете число: ");
    scanf("%d", &a);

    printf("Въведете число: ");
    scanf("%d", &b);

    int result = 0;
    int i = a + 1;
    
    for(i; i < b; i ++)
    {
        result += i;
    }
    printf("%d", result);
}