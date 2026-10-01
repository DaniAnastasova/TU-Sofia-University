#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>
#define SIZE 5


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    // int i,n;
    // int *stations;
    // i = 7;
    // stations = (int*) malloc (i*4);

    // if(stations == NULL){
    //     exit(1);
    // }

    // for(n = 0; n < i; n++){
    //     stations[n] = n;
    // }

    // for(n = 0; n < 7; n++){
    //     printf("%d", stations[n]);
    //     printf("\n");
    // }

    // int *ptrStations;
    // *ptrStations = stations;

    // stations = (int*) malloc (++i*4);
    // for(n = 0; n < 7; n++){
    //     stations[n] = ptrStations[n];
    //     stations[i-1] = i;
    // }

    // for(n = 0; n < 7; n++){
    //     printf("%d", stations[n]);
    //     printf("\n");
    // }

    // ptrStations = stations;
    // int x = 3;
    // for(n = x; n<i; n++){
    //     ptrStations[n-1] = ptrStations[n];
    //     stations = (int*) malloc (--i*4);
    // }

    // for(n = 0; n <7; n++){
    //     stations[n] = ptrStations[n];
    // }

    // for(n = 0; n <7; n++){
    //     printf("%d", stations[n]);
    // }

    // free(stations);
    // free(ptrStations);


    // Пример 2
    // int i;
    // double *p;
    
    // p = calloc(10, sizeof(double));

    // for(i = 0; i < 10; i++){
    //     *(p+i) = i;
    // }
    // for(i = 0; i< 10; i++){
    //     printf("*(p + %d) = %lf\n", i, *(p+i));
    // }

    // free(p);


    // p = calloc(4, sizeof(double));
    // for(i = 0; i < 4; i++){
    //     *(p+i) = i*i;
    // }
    // for(i = 0; i< 4; i++){
    //     printf("*(p + %d) = %lf\n", i, *(p+i));
    // }

    // free(p);

    // Пример 3
    // int r =3, c =4;

    // int *ptr = malloc((r*c)*sizeof(int));

    // for(int i = 0; i < r *c; i++){
    //     ptr[i] = i+1;
    // }
    // for(int i = 0; i < r; i++){
    //     for(int j =  0; j < c; j++){
    //         printf("%d ", ptr[i * c + j]);      
    //     }
    //     printf("\n");
    // }
    // free(ptr);


    // Пример 4
    char *M[SIZE]= {"1-Vavejfane",
    "2-Izvejfane",
    "3-Suma",
    "4-Max",
    "5- Izhod"};

    int code,n, *p = NULL, flag = 0;

    do{
        for(int i = 0; i<SIZE; i++){
            puts(M[i]);
        }
        printf("Izberete kod: ");
        scanf("%d", code);
        switch (code)
        {
        case 1:
            p = input(&n,p);
            flag = 1;
            break;
        
        case 2:
            if(flag == 1){
                out(n,p);
            }
            else{
                printf("Izberete parvo 1");
            }

        case 3:
            if(flag == 1){
                out(n,p);
                printf("Sum = %d\n", Sum(n,p));
            }

        case 4:
            if(flag == 1){
                out(n,p);
                printf("Max num is %d", Max(n,p));
            }
        
        case 5:
            if(p != NULL){
                free(p);
            }
        default:
            printf("Nekorektna stoinost!")
            break;
        }
    }while(1);
}

int*input(int *br, int*mas){
    int k = 0;
    printf("Vavedete razmer: ");
    scanf("%d", &k);
    mas = (int*)malloc(k*sizeof(int));
    if(mas == NULL){
        printf("Niama pamet!");
        exit(1);
    }

    for(int i = 0; i <k; i++){
        printf("[%d]= ", i);
        scanf("%d", (mas+i));
    }
    *br = k;
    return mas;
        
}

void out(int br, int *mas){
    int i;
    for(int i = 0; i < br; i++){
        printf("[%d] = %d",i, *(mas+i));
    }
}


int Sum(int br, int *mas){
    int sum = 0;
    int i;

    for(int i = 0; i < br; i++){
        sum += *(mas+i);
    }

    return sum;
}

int Max(int br, int *mas){
    int m = mas[0];

    for(int i = 1; i < br; i++){
        if(mas[i]> m){
            m = mas[i];
        }
    }
    return m;
}

