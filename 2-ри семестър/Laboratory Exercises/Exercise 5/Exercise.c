#include <stdio.h>
#include <locale.h>
#include <Windows.h>

// const int CITY = 2;
// const int WEEK = 7;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // Укзатели
    // int var1;
    // printf("Address of var1 variable: %x \n", &var1);
    // %x - дава адрес на променливата 
    // %p - използва се за адрес на указател

    // int var = 20;
    // int *ip;

    // ip = &var;
    //Адрес на променлива
    // printf("Address of var variable: %x \n", &var);
    //Адрес на указател
    // printf("Address of ip variable: %x \n", ip);
    //Стойност на променливата 
    // printf("Value of var in ip: %d \n", *ip);
    

    // int *ptr = NULL;
    // printf("The value of ptr is: %x\n", ptr);


    // int arr[] = {10,20,30,40,50,60};
    // int *ptr = arr;
    // printf("arr[2] = %d\n", arr[2]);
    // printf("*(arr +2) = %d\n", *(arr+2));
    // printf("ptr[2] = %d\n", ptr[2]);
    // printf("*(ptr+2) = %d\n", *(ptr+2));


    //Многомерни масиви 
    //Двумерен масив - Масив, на когото елементите са масиви 
    // тип: име на променлива: [][] - скобите дават броя на масива- в случая е двумерен масив
    // int arr[4][3] - 4 реда и 3 стълба

    // int a[3][4] = {
    //     {0,1,2,3},
    //     {4,5,6,7},
    //     {8,9,10,11}
    // };

    // int val = a[2][3]; - взимаме стойност на този елемент в двумерния масив

    // int arr[2][3] = {
    //     {0,1,2},
    //     {3,4,5}
    // };

    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("arr[%d][%d] = %d ", i,j,arr[i][j]);    
    //     } 
    // }

    // int temperature[CITY][WEEK];
    // for(int i = 0; i < CITY; i++){
    //     for(int j = 0; j < WEEK; j++){
    //         printf("City %d, Day %d: ",i+1, j+1);
    //         scanf("%d", &temperature[i][j]);
    //     }
    // }

    // for(int i = 0; i < CITY; i++){
    //     for(int j = 0; j < WEEK; j++){
    //         printf("temperature[%d][%d] = %d ",i,j, temperature[i][j]);
    //     }
    // }
    


    return 0;
}