#include <stdio.h>
#include <locale.h>
#include <Windows.h>

struct complex{
    int imag;
    double real;
};

struct nums{
    struct complex comp;
    int integers;
}num1;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    num1.comp.imag = 11;
    num1.comp.real = 5.62;

    num1.integers = 6;

    printf("Imag. - %d\n", num1.comp.imag);
    printf("Real. - %.2lf\n", num1.comp.real);
    printf("Integers - %d\n", num1.integers);
}