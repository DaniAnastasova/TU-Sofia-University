#include <stdio.h>

int main()
{
    double inch;
    printf("Въведете желани инчове: ");
    scanf("%lf", &inch);
    double resultMm = 0;
    double resultSm = 0;
    double resultM = 0;

    resultMm = 25.4 * inch;
    resultSm = 2.54 * inch;
    resultM = 0.0254 * inch;

    printf("%lf \n", resultMm);
    printf("%lf \n", resultSm);
    printf("%lf \n", resultM);
}