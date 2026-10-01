#include <stdio.h>
#include <locale.h>
#include <Windows.h>

void Func(int a, int b){
    int arg;
    arg = a;
    a = b;
    b = arg;
}
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

}