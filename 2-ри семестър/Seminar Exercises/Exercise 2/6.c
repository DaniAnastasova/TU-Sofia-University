#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>  // за fmin

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int kilometar;
    char ch;

    printf("Въведете брой километри: ");
    scanf("%d", &kilometar);

    while(getchar() != '\n');

    printf("Въведете период от деня (D/N): ");
    scanf("%c", &ch);

    double price = 0;

    double priceTaxi = 0.70;
    if(ch == 'D' || ch == 'd')
    {
        priceTaxi += 0.79 * kilometar;
    }
    else
    {
        priceTaxi += 0.90 * kilometar;
    }

    double priceBus = 0.09 * kilometar;
    double priceTrain = 0.06 * kilometar;

    if(kilometar >= 20 && kilometar < 100){
       price = fmin(priceTaxi, priceBus);
       printf("%lf\n", price);
    }
    else if(kilometar >= 100){
        price = fmin(priceTaxi, priceBus);
        if(priceTrain < price){
            printf("%lf\n", priceTrain);
        }
        else
        {
            printf("%lf\n", price);
        }
    }
    else{
        printf("%lf\n", priceTaxi);
    }

}