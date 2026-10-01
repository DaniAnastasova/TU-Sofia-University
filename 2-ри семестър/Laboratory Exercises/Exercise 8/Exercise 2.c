#include <stdio.h>
#include <locale.h>
#include <Windows.h>

typedef struct Person{
    char name[50];
    int citNo;
    float salary;
}person;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    person p1;
    strcpy(p1.name, "Name1");
    p1.citNo = 1984;
    p1.salary = 2020.56;

    printf("Name is - %s\n", p1.name);
    printf("Godina na rajdane - %d\n", p1.citNo);
    printf("Zaplata - %.2f\n", p1.salary);

}