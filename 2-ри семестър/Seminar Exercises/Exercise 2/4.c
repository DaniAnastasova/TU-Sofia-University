#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int sec1;
    int sec2;
    int sec3;

    printf("Въведете секунди на състезател: ");
    scanf("%d", &sec1);
    if(sec1 < 1 || sec1 > 50){
        printf("Въведете коректна стойност за секундите: ");
        scanf("%d", &sec1);
    }

    printf("Въведете секунди на състезател: ");
    scanf("%d", &sec2);
    if(sec2 < 1 || sec2 > 50){
        printf("Въведете коректна стойност за секундите: ");
        scanf("%d", &sec2);
    }

    printf("Въведете секунди на състезател: ");
    scanf("%d", &sec3);
    if(sec3 < 1 || sec3 > 50){
        printf("Въведете коректна стойност за секундите: ");
        scanf("%d", &sec3);
    }

    int min = 0;
    int second = 0;
    int result = 0;

    result = sec1 + sec2 + sec3;
    if(result >= 60){
        min++;
        second = result - 60;
        if(second >= 60){
            min++;
            second = second - 60;
        }
    }
    else{
        second = result;
    }
    printf("%d:%.2d", min, second);
}
