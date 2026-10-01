#include <stdio.h>
#include <locale.h>
#include <Windows.h>

void decimalBin(int n){
    long long bin = 0;
    int i = 1;

    while(n>0){
        bin = bin + (n%2)*i;
        n = n/ 2;
        i = i * 10;
    }

    printf("Двойчното число е: %d\n", bin);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int n;
    printf("Въведи число: ");
    scanf("%d", &n);

    decimalBin(n);
}

