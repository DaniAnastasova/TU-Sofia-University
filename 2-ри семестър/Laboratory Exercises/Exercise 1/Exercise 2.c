#include <stdio.h>

int main()
{
    double a;
    double b;

    printf("Въведете стойност на страната a: ");
    scanf("%lf", &a);

    printf("Въведете стойност на страната b: ");
    scanf("%lf", &b);

    double result = 0;
    result = a * b;

    printf("%.2lf", result);
    return 0;
}