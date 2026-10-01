#include <stdio.h>

int main()
{
    double bgn;
    printf("Въведете левове: ");
    scanf("%lf", &bgn);

    double dollar = 0;
    double euro = 0;
    double paund = 0;

    dollar = 0.60006 * bgn;
    euro = 1.95583 * bgn;
    paund = 0.4443 * bgn;

    printf("%lf \n", dollar);
    printf("%lf \n", euro);
    printf("%lf \n", paund);
}