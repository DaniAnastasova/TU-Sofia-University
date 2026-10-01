#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char * argv[]){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    FILE *fp;
    double ld;
    int d;
    char str[80];

    if(argc != 2){
        printf("Specify file name. \n");
        exit(1);
    }

    if((fp = fopen(argv[1], "w"))== NULL){
        printf("Cannot open file. \n");
        exit(1);
    }

    fprintf(fp, "%f %d %s", 12345.342, 1908, "hello");
    fclose(fp);

    if((fp = fopen(argv[1], "r"))== NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    fscanf(fp, "%lf%d%s", &ld, &d, str);
    printf("%f %d %s", ld, d, str);
    fclose(fp);
}