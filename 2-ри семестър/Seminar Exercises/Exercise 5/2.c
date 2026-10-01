#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

struct Product{
    char name[50];
    double price;
    int id;
};

struct Order{
    char adress[100];
    int productId;
};


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int arrForProduct[100];
    char duma[30];

    int waiting_order = 0;
    int productCount = 0;
    int orderCount = 0;


    while(1){
        printf("Въведете дума: ");
        scanf("%s", duma);
        if(duma[0] == 'E', duma[1] == 'N', duma[2] == 'D', duma[3]=='\0'){
            break;
        }

        if(duma[0] == 'P', duma[1] == 'r', duma[2] == 'o', duma[3]=='d', duma[4] == 'u', duma[5]=='c', duma[6] == 't', duma[7]== "\0"){
            struct Product product;
            printf("Въведете име на продукт: ");
            scanf("%s", product.name);
            scanf("%lf", product.price);
            scanf("%d", product.id);
            productCount++;
        }

    else if(duma[0] == 'O', duma[1] == 'r', duma[2] == 'd', duma[3]=='e', duma[4] == 'r', duma[5]=='\0'){
        orderCount++;
        if(productCount > 0){

        }

    }
  }
}