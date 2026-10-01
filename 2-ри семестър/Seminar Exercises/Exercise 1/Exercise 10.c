#include <stdio.h>

int main()
{
    double vegetablesPrice;
    double fruitsPrice;
    int kgForVegetables;
    int kgForFruits;

    printf("Въведете цена на килограм на зеленчуци: ");
    scanf("%lf", &vegetablesPrice);

    printf("Въведете цена на килограм на плодове: ");
    scanf("%lf", &fruitsPrice);

    printf("Въведете килограми зеленчуци: ");
    scanf("%d", &kgForVegetables);

    printf("Въведете килограми плодове: ");
    scanf("%d", &kgForFruits);

    double result = 0;
    result = 1.95 * ((vegetablesPrice * kgForVegetables) + (fruitsPrice * kgForFruits));

    printf("%lf", result);

}