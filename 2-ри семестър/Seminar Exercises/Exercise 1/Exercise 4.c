#include <stdio.h>

int main()
{
    double gradus;
    printf("Въведете градуси: ");
    scanf("%lf", &gradus);

    double result = 0;
    result = 0.0175 * gradus;

    printf("%lf", result);
}
    