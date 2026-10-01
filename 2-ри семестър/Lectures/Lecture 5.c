#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    // Теория

    // int num[10]; неизменяем масив по елементи и дължина
    // malloc - Функция, чиято връща тип void. Заделя памет (стойностите са произволни)
    // int *p = (int*)malloc(5*sizeof(int));

    //Указателите задължително трябва да съвпадат по тип.
    // int x = 5;
    // char *p = &x;
    // printf("%d",sizeof(num) / sizeof(int));
    // printf("%d", sizeof(p));
    // calloc - Функция. Заделя памет и я нулира
    // realloc - Функция. променя размера на вече заделена памет
    // realloc(p, size);
    // free(p) - Функция. Освобождава паметта. 

    // int *p = (int*)calloc(5, sizeof(int));
    // p = (int*)realloc(p, 10 * sizeof(int));
    // free(p);
    
    // Практика
    int num[10];
    int* p = num;
    for (int i = 0; i < 10; i++){
        // num[i] = i;
        * (p+i) = i;
    }
    for (int i = 0; i < 10; i++){
        // printf("%d \n", num[i]);
        // printf("%p \n", &num[i]);
        // printf("%d \n", *(p+i));
    }
    //  printf("%d \n", &num);
    //  printf("%d \n", &num[0]);

    int x = 5;
    int* k = &x;
    // printf("%d \n", &x);
    // value_check(&x);
    // printf("x in main: %d\n", x);

    char name[] = "Ivan";
    // printf("%d \n", sizeof(name)); - дава дължината на текста + \0 
    // printf("%d \n", strlen(name)); - дава само дължината на текста без \0

    // char secondName[10];
    // secondName = name; - не е възможно 
    // printf(strcpy(secondName, name));
    // printf("\n");
    // printf(name);
    // printf("\n");
    // printf(secondName);
    // printf("\n");
    // printf("%d", strcmp(name, secondName));

    // int* nums_1 = (int*)malloc(sizeof(int) * 5);
    // int* nums_2 = (int*)calloc(5, sizeof(int));
    
    // for(int i = 0; i<5; i++){
    //     printf("%d -> %d\n", i + 1, nums_1[i]);
    //     printf("%d -> %d\n", i + 1, nums_2[i]);
    // }

    // int static_array[10];

    // printf("%d \n", sizeof(static_array));
    
}

// int value_check(int x){
//     x++;
//     printf("x in value_check: %d \n", x);
// }

// int value_check(int* x){
//     (*x)++;
//     printf("x in value_check: %d \n", *x);
// }