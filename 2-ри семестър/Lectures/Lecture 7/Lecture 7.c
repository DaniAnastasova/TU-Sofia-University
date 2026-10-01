#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // В структурата не може да има методи
    // Ако има метод в структура, то това е клас не е структура   

    typedef struct
    {
        char name[20];
        char fac_num[20];
        int group;
        double grade;
    } Student;

    Student student;
    strcpy(Student.name, "Ivan");
    student.group = 58;
    student.grade = 4.58;
    student.name = (char*)malloc(20);
}



// typedef struct 
// {
//     char name;
//     char fac_num[20];
//     int group;
//     double grade;
// } *p;

// typedef struct 
// {
//     char name;
//     char fac_num[20];
//     int group;
//     double grade;
// } student[10];
