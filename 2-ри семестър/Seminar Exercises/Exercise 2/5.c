#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    double x1;
    double y1;
    double x2;
    double y2;
    double x;
    double y;

    printf("Въведете стойности: ");
    scanf("%lf%lf%lf%lf%lf%lf", &x1,&y1,&x2,&y2,&x,&y);

    if(x <= x1 && x <= x2){
        if(y <= y1 && y <= y2){
            printf("Inside");
        }
    }
    else{
        printf("Outside");
    }


}