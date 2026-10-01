#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    //FILE* <име>;
    //Функции при файловете: 
    //fopen(char *име на файл, char *режим на файл);
    //Режими за работа: 
    //r - отваря файл за четене
    // w - създава текстов файл за запис
    // a - добавя към текстов файл, като окж ни съществува го създава 
    // rb, wb, ab - режимите за работа при бинарни файлове
    //r+ - отваря текстов файл за четене/запис
    //w+ - създава текстов файл да четене/запис
    //fclose(); 
    //fgetc(); - Функция за четене
    //fputc(); 

    // FILE *fp;
    // if((fp == fopen("myfile", 'r')) == NULL){
    //     printf("Error openinng file. \n");
    //     exit(1);
    // }

    // 1 задача
    char str[80] = "This is a file system test. \n";
    FILE *fp;
    char *p;
    int i;

    if((fp = fopen("myfile", "w")) == NULL){
        printf("Cannot open file. \n");
        exit(1);
    }

    p = str;

    while(*p){
        if(fputc(*p, fp)==EOF){
            printf("Error writing file. \n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if((fp = fopen("myfile", "r"))== NULL){
        printf("Cannot open file.");
        exit(1);
    }

    for(;;) //безкраен цикъл
    {
        i = getc(fp);
        if(i == EOF){
            break;
        }
        putchar(i);
    }
    fclose(fp);

    //Функции за файлове 
    // Това са прототипи на функциите
    // int fprintf(FILE *fp, char *режим на работа);
    // int fscnaf*(FILE *fp, char *режим на работа);

    //feof(FILE *fp) - функция за стигане до край на файла. Дава дали той е стигнал до края


}