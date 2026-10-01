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
    int sum = 0;
    int count = 0;
    double avrSum = 0;
    int position = 0;
    int stoinost = 0;
    
    while(sizeof(nums) <= 7);{
        for(int i = 0; i < 7; i++){
            printf("Въведете число: ");
            scanf("%d", &n);

            if(n >= -500 && n <= 500){
                nums[i] = n;
                sum += nums[i];
                count++;
            }
        }
        avrSum = sum / count;

        stoinost = nums[0];
        for(int k = 0; k <7; k++){
            if(fabs(nums[k] - avrSum) < fabs(stoinost - position)){
                stoinost = nums[k];
                position = k + 1;
            } 
        }
    }
    printf("Средна стойност: %lf, най-близка стойност: %d, на позиция - %d",avrSum, stoinost, position);
}