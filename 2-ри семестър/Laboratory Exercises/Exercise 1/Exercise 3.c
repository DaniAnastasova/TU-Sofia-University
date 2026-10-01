#include <stdio.h>

int main()
{
    double d;
    printf("Въведете диаметър: ");
    scanf("%lf", &d);

    double result = 0;
    result = 3.14 * d;
    
    printf("%lf", result);
    return 0;
}