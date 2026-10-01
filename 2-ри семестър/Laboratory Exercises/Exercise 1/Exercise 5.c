#include <stdio.h>

int main()
{
    int x = 12;
    int y = 5;

    double result = 0;
    result = x / y;

    printf("%lf \n", result);
    printf("%d \n", x++);
    printf("%d \n", y--);
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d\n", x && y);
    printf("%d \n", x || y);
    printf("%d", !y);
    return 0;
}