#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define SIZE 1000

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // int nums[10];
    // for(int i = 0; i < 10; i++){
    //     nums[i] = i +1;
    // }

    // for(int j = 0; j < 10; j++){
    //     printf("Element[%d] = %d\n", j, nums[j]);
    // }

    // double arr[5];
    // double num;
    // for(int i = 0; i < 5; i++){
    //      prinf("Въведете число: ");
    //      scanf("%lf", &num);
    //      arr[i] = num;
    // }

    // for(int j = 0; j < 5; j++){
    //     printf("Element[%d] = %lf\n", j, arr[j]);
    // }

    // int arr[] = {10,20,30,40,50,60};
    // int* ptr = arr;

    // printf("Size of arr[] %ld\n", sizeof(arr));

    // printf("Size of ptr %ld", sizeof(ptr));
    // return 0;

    // int n, sum = 0, i;
    // int ar[SIZE];

    // do{
    //     printf("n =");
    //     scanf("%d", &n);
    //     if(n>SIZE || n < 0){
    //         printf("Nevalidna stoinost;");
    //     }
    // } 
    // while(n>SIZE || n <= 0);{
    //     for(i = 0; i< n; i++){
    //         printf("ar[%d] = ", i);
    //         sum += ar[i];
    //     }
    //     printf("Sum = %d\n", sum);
    // }
    // char greeting[8] = {'D','a','n','i','e','l','a','\0'};
    // printf("%s \n", greeting);
    // printf("%c", greeting);

    // fgets()
    // puts()

    // char name[30];
    // printf("Enter name: ");
    // fgets(name, sizeof(name), stdin);
    // printf("Name: ");
    // puts(name);
    // return 0;

    char name[] = "Daniela Anastasova";
    printf("%c \n", *name);
    printf("%c \n", *(name+1));
    printf("%c \n", *(name+2));
    printf("%c \n", *(name+3));
    printf("%c \n", *(name+4));
    printf("%c \n", *(name+5));
    printf("%c \n", *(name+6));
    printf("%c \n", *(name+7));
    
    char *namePtr;
    
    //Чраз указател- 2 вариант
    namePtr = name;
    printf("%c \n", *namePtr);

}