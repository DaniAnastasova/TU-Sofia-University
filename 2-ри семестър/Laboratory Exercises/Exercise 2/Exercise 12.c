#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    
    int result = 0;
    int num = 1;
    while(num != 0){
        printf("Въведете число: ");
        scanf("%d", & num);

        result += num;
    }
    printf("%d", result);
}