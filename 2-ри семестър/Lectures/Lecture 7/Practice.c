#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // struct Student
    // {
    //     char name[20];
    //     int age;
    //     char fac_num[11];
    //     double grade;
    // };

    // typedef struct 
    // {
    //     char *name;
    //     int age;
    //     char *fac_num;
    //     double grade;
    // }Student;

    // FILE *file = fopen("students.bin", "wb");
    // if(file == NULL){
    //     exit(1);
    // }
    // for(int i = 0; i < 3; i++){
    //     fread(&studentsFromFile[i], sizeof(Student), 1, file);
    // }
    // fclose();


    // struct Student student; - така е когато няма typedef
    // Student student; - по този начин дава грешка когато няма typedef
    // Student student;
    // Student *studentP = &student;
    // student.name = (char*)malloc(20);
    // student.fac_num = (char*)malloc(11);
    // strcpy(student.name, "Ivan");
    // strcpy(studentP -> name, "Ivan");
    // strcpy(student.fac_num, "121225189");
    // strcpy(studentP -> fac_num, "121225189");
    // student.age = 20;
    // student.grade = 4.56;
    // studentP -> age = 20;
    // studentP -> grade = 4.56;


    // Student students[3];
    // Student *studentP1 = &student;
    // student.name = (char*)malloc(20);
    // student.fac_num = (char*)malloc(11);
    // strcpy(student.name, "Ivan");
    // strcpy(studentP1 -> name, "Ivan");
    // strcpy(student.fac_num, "121225189");
    // strcpy(studentP1 -> fac_num, "121225189");
    // student.age = 20;
    // student.grade = 4.56;
    // studentP1-> age = 20;
    // studentP1 -> grade = 4.56;
    // students[0] = student;

    // Student students2;
    // Student *studentP2 = &student;
    // student.name = (char*)malloc(20);
    // student.fac_num = (char*)malloc(11);
    // strcpy(student.name, "Ivan");
    // strcpy(studentP2 -> name, "Ivan");
    // strcpy(student.fac_num, "121225189");
    // strcpy(studentP2 -> fac_num, "121225189");
    // student.age = 20;
    // student.grade = 4.56;
    // studentP2 -> age = 20;
    // studentP2-> grade = 4.56;
    // students[1] = students2;

    // Student students3;
    // Student *studentP3 = &student;
    // student.name = (char*)malloc(20);
    // student.fac_num = (char*)malloc(11);
    // // strcpy(student.name, "Ivan");
    // strcpy(studentP3 -> name, "Ivan");
    // // strcpy(student.fac_num, "121225189");
    // strcpy(studentP3 -> fac_num, "121225189");
    // // student.age = 20;
    // // student.grade = 4.56;
    // studentP3 -> age = 20;
    // studentP3 -> grade = 4.56;
    // students[2] = students3;

    // for(int i = 0; i < 3; i++){
    //     fwrite(students[i], sizeof(Student),1, file);
    // }
    // fclose(file);
    

    // printf(student.name);
    // printf("\n");
    // printf(student.fac_num);
    // printf("\n");
    // printf("%d\n", student.age);
    // printf("%.2lf\n", student.grade);

//    for(int i = 0; i < 3; i++){
//         printf(students[i].name);
//         printf("\n");
//         printf(students[i].fac_num);
//         printf("\n");
//         printf("%d\n", students[i].age);
//         printf("%.2lf\n", students[i].grade);
//    }


    struct Product{
        char brand[30];
        double price;
        char name[30];
    };
    struct Store{
        char name[20];
        char url[20];
        char owner[20];
        struct Product products[10];  
    };

    
}