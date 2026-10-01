#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // Файлове - поток от данни 
    // Видове файлове - текстов, бинарен 
    // Текстовият файл е бинарен файл. 
    // int sizeof100 - случайно число, зависи от char-овете на string-a - слага се преди да се четe string в един файл 
    // \0 - терминираща нула няма в бинарните файлове.

    // FILE *fp = fopen("path", "r"); //r - read
    // FILE *fp = fopen("path", "w"); //w - write
    // FILE *fp = fopen("path", "a"); //a - append

    // if(fp == NULL){
    //     printf();
    //     exit();
        // exit(1);
        // exit(0); 
    //}

    // fclose(fp);

    //write - презаписва файла
    //append - добавя във файла

    //Функции във файлове
    // fprintf(fp,"%d", a);
    // fscanf(fp,"%d", &a);
    // fgets(&, брой char-ове, fp)

    //Главни функции за бинарни файлове 
    // fread(&,type(),брой char-ове, fp);
    // fwrite(&,type(),брой char-ове, fp);
    // пример - nums,sizeof(int),5, fp
    // Тези функции се използвят и за текстови файлове


    // Практика 
    // char text[15];
    // FILE* fp = fopen("example.txt", "w");
    // if(fp == NULL){
    //     exit(1);
    // }
    // fprintf(fp, "Something else");
    // fclose(fp);
    // fp = fopen("example.txt", "r");
    // fscanf(fp,"%s", text);
    // fgets(text,15, fp);
    // fclose(fp);
    // printf(text);


    char name[] = "Ivan";
    char name_from_file[10];
    int group = 38;
    FILE* fp = fopen("example.bin", "wb");
    if(fp == NULL){
        exit(1);
    }
    
    int len = sizeof(name);
    fwrite(&len, sizeof(int), 1, fp);
    fwrite(name,  sizeof(char), 5, fp);
    fwrite(&group, sizeof(int), 1, fp);
    fclose(fp); 

    fp = fopen("example.bin", "rb");
    if (fp == NULL){
        exit(1);
    }
    int len_from_file;
    int group_from_file;
    fread(&len_from_file, sizeof(int), 1, fp);
    fread(name_from_file, sizeof(char), len_from_file, fp);
    fread(&group_from_file, sizeof(int), 1, fp);
    fclose(fp);
    printf("%s \n", name_from_file);
    printf("%d", group_from_file);

}