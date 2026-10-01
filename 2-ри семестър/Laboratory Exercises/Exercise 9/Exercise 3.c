#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>

double d[10] = {10.23, 19.87, 1002.23, 12.9, 0.897, 11.45, 75.34, 0.0, 1.01, 875.875};
int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // За бинарни файлове
    // fread();
    // fwite();

    // int fseek(FILE *fp, long отместване, int начало)
    //SEEK_SET - търси от началото на файлла
    //SEEK_END - търси от края на файла
    //SEEK_CUR - търси от теущата позиция на файла 
    //ftell()

    
    long loc;
    double value;
    FILE *fp;

    if((fp = fopen("myfile", "wb"))== NULL){
        printf("Cannot open this file.\n");
        exit(1);
    }

    if(fwrite(d, sizeof d, 1,fp) != 1){
        printf("Write error. \n");
        exit(1);
    }
    fclose(fp);

    if((fp = fopen("myfile", "rb"))== NULL){
        printf("Cannot open this file.\n");
        exit(1);
    }

    printf("Which element? ");
    scanf("%ld", &loc);
    if(fseek(fp, loc*sizeof(double), SEEK_SET)){
        printf("Seek error.\n");
        exit(1);
    }
    fread(&value, sizeof(double), 1, fp);
    printf("Element %ld is %f", loc, value);

    fclose(fp);

    //int rename( char *старо име, char *ново име);
    //int remove(char *име на файл) - изтрива файл

    


}