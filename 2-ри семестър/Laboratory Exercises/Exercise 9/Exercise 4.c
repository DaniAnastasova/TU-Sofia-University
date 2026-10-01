#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    FILE *fp, *fp1; 
    int i, a, b;
    i = 1500;

    if((fp = fopen("binary", "wb"))== NULL){
        printf("the binary file couldnt open.\n");
        exit(1);
    }

    if((fp1 = fopen("txt", "w")) == NULL){
        printf("The txt file couldnt open.\n");
        exit(2);
    }

    fprintf(fp1, "%d", i);
    if(fwrite(&i, sizeof(int), 1, fp) != 1){
        printf("write error occured!\n");
        exit(3);
    }

    fclose(fp);
    fclose(fp1);
    
    if((fp = fopen("binary", "rb")) == NULL){
        printf("the binary file couldnt open.\n");
        exit(4);
    }

    if((fp = fopen("txt", "r")) == NULL){
        printf("the txt file couldnt open.\n");
        exit(5);
    }

    if(fread(&a, sizeof(int),1,fp) != 1){
        printf("write error occuerd.\n");
        exit(6);
    }

    fscanf(fp1, "%d", &b);

    printf("a is %d and b is %d\n", a, b);
    fclose(fp);
    fclose(fp1);
    system("pause");
    return 0;
}
