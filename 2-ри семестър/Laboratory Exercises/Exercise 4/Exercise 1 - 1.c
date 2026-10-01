#include <stdio.h>
#include <locale.h>
#include <Windows.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int nums[7];
    int n = 0;
    int sum = 0;
    while(sizeof(nums) <= 7);{
        for(int i = 0; i < 7; i++){
            printf("Въведете число: ");
            scanf("%d", &n);

            if(n >= -500 && n <= 500){
                nums[i] = n;
                sum += nums[i];
            }
        }
    }
    printf("%d", sum);
}