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
    scanf("$d", &a);

    switch (a)
    {
     case 1:
        printf("Eдно");
        break;
     case 2:
        printf("Две");
        break;
     case 3:
        printf("Три");
        break;
     case 4:
        printf("Четири");
        break;
     case 5:
        printf("Пет");
        break;
     case 6:
        printf("Шест");
        break;
     case 7:
        printf("Седем");
        break;
     case 8:
        printf("Осем");
        
        break;
     case 9:
        printf("Девет");
        break;
     case 10:
        printf("Десет");
        break;
     default:
        printf("....");
        break;
    }

}