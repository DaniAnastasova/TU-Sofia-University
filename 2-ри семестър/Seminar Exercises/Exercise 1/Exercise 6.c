#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    printf("Въведете страна а на трапец:  ");
    scanf("%d", &a);

    printf("Въведете страна b на трапец:  ");
    scanf("%d", &b);

    printf("Въведете височината c на трапец:  ");
    scanf("%d", &c);

    double result = 0;
    result = ((a + b) / 2) * c;

    printf("%lf", result);
}