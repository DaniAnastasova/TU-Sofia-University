#include <stdio.h>

int main()
{
    double gradus;
    printf("Въведете градуси: ");
    scanf("%lf", &gradus);

    double result = 0;
    result = (gradus * 1.8) + 32;

    printf("%lf", result);
}