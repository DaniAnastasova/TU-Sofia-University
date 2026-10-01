#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    
    int n;
    int k;

    printf("Въведете число: ");
    scanf("%d", &n);

    printf("Въведете число: ");
    scanf("%d", &k);
    
    int countNum = 0;
    int i = 1;
    while(i <= n){
        int num = 0;
        printf("Въведете число: ");
        scanf("%d", &num);
        if(num > k && num % 3 == 0){
            countNum += 1;
        }
        i++;
    }
    printf("%d", countNum);
}