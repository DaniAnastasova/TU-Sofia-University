#include <stdio.h>

int main()
{
    int days;
    double salaryPerDay;
    double coursBgnToDollar;

    printf("Въведете работни дни на Иван: ");
    scanf("%d", &days);

    printf("Въведете пари на ден: ");
    scanf("%lf", &salaryPerDay);

    printf("Въведете курс на долара: ");
    scanf("%lf", &coursBgnToDollar);

    double salary = days * salaryPerDay;
    double bonus = 2.5 * salary;
    double danak = (25/ 100) * (salary * 12);

    

}