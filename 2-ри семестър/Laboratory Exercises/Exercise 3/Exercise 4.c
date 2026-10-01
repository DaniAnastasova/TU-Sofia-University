#include <stdio.h>
#include <locale.h>
#include <Windows.h>

void Func(int a){
    if(a % 2 == 0){
        printf("Числото е четно");
    }
    else{
        printf("Числото е нечетно");
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num;

    printf("Въведете число: ");
    scanf("%d", &num);

    Func(num);

}
