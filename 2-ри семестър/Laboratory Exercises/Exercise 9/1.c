#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>

void create_file(char *filename){
    FILE *fp;
    if((fp = fopen(filename, "wb")) == NULL){
        printf("Error");
        exit(1);
    }

    int n;
    printf("Въведете брой на числата: ");
    scanf("%d", &n);

    fwrite(&n, sizeof(int), 1, fp);

    int num = 0;

    for(int i = 0; i < n; i++){
        printf("Въведете число, което ще се добави във файла: ");
        scanf("%d", &num);
        fwrite(&num, sizeof(int), 1, fp);
    }
    fclose(fp);
}

void even_odd_nums(char *filename){
    FILE *fp;
    if((fp = fopen(filename, "rb")) == NULL){
        printf("Error");
        exit(1);
    }
    int count_even_nums = 0;
    int count_odd_nums = 0;
    int n;
    int num; 

    if(fread(&n, sizeof(int), 1 , fp) != 1){
        fclose(fp);
        return;
    }

    for(int i = 0; i < n; i++){
        fread(&num, sizeof(int), 1, fp);
        if(num % 2 == 0){
            count_even_nums++;
        }
        else{
            count_odd_nums++;
        }
    }

    fwrite(&count_even_nums, sizeof(int), 1, fp);
    fwite(&count_odd_nums, sizeof(int),1, fp);
    fclose(fp);
}

void sorted(char *filename){
    FILE *fp;
    if((fp = fopen(filename, "rb")) == NULL){
        printf("Error");
        exit(1);
    }

    FILE *fp1;
    if((fp1 = fopen("txt", "w"))== NULL){
        printf("Error");
        exit(2);
    }

    int n;
    int num; 
    int min_num = 0;

    if(fread(&n, sizeof(int), 1 , fp) != 1){
        fclose(fp);
        return;
    }

    min_num = fread(&num, sizeof(int), 1, fp);

    for(int i = 0; i < n; i++){
        fread(&num, sizeof(int), 1, fp);
        if(num < min_num){
            min_num = num;
            fscanf(fp1, "%d", &num);
        }
    }
    fclose(fp);
}
2

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    char *filename = "binary.bin";
    create_file(filename);
    even_odd_nums(filename);
    sorted(filename);
    return 0;

}