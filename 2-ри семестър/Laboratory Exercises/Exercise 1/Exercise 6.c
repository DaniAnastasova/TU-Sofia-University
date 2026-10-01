#include <stdio.h>

int main()
{
    double a;
    double b;

    printf("Въведете числото a: ");
    scanf("%lf", &a);

    printf("Въведете числото b: ");
    scanf("%lf", &b);

    printf("%.3lf \n", a+b);

    double result = 0;
    a = a++;
    b = b--;
    result = (a + b);
    printf("%lf \n", result);
    printf("%lf \n", a);
    printf("%lf ", b);
}