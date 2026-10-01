#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int nums[7];
    int n = 0;
    int max_num = 0;
    int min_num = 0;
    while(sizeof(nums) <= 7);{
        for(int i = 0; i < 7; i++){
            printf("Въведете число: ");
            scanf("%d", &n);

            if(n >= -500 && n <= 500){
                nums[i] = n;
            }
        }
        min_num = nums[0];
        for(int k = 0; k < 7; k++){
            if(nums[k] < min_num){
                min_num = nums[k];
            }
        }
        max_num = nums[0];
        for(int j = 0; j < 7; j++){
            if(nums[j] > max_num){
                max_num = nums[j];
            }
        }
        printf("Min num is: %d\n",min_num);
        printf("Max num is: %d",max_num);
    }
}