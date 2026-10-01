#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int hour;
    int min;
    printf("Въведете час: ");
    scanf("%d", &hour);

    printf("Въведете минути: ");
    scanf("%d", &min);

    int newHour;
    int newMin;
    if(hour > 24 || hour < 0)
    {
        printf("Въведете коректен час: ");
        scanf("%d", &newHour);
    }

    if(min > 59 || min < 0)
    {
        printf("Въведете коректни минути: ");
        scanf("%d", &newMin); 
    }

    min += 15;
    if(min >= 60){
        hour++;
        min-=60;
    }
    if (hour >= 24){
        hour = 0;
    }

    printf("%d:%.2d", hour, min);
}