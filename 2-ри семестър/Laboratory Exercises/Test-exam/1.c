#include <stdio.h>
#include <locale.h>
#include <Windows.h>

typedef struct{
    char name[31];
    char date[8];
    long long id;
    float price;
    int quantity;
}Medicine;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    FILE *fp;
    if(fp = fopen("medicines.bin", 'rb') == NULL){
        printf("Error");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    int size_file = 0;
    size_file = ftell(fp);
    if(size_file < 0){
        printf("Error");
        exit(2);
    }
    else{
        rewind(fp);
    }

    int zadeleno_mqsto = size_file / sizeof(Medicine);

    Medicine *medicines = (Medicine*)malloc(zadeleno_mqsto*sizeof(Medicine));

    fread(&medicines, sizeof(Medicine), zadeleno_mqsto, fp);
    fclose(fp);

    for(int i = 0; i < zadeleno_mqsto; i++){
        printf(medicines[i].name);
        printf(medicines[i].date);
        printf("%lld",medicines[i].id);
        printf("%f",medicines[i].price);
        printf("%d",medicines[i].quantity);
    }
    
}

int Func(Medicine *medicines, int count_element_in_arr, char date2){
    int month;
    int year;
    int month2;
    int year2;

    Medicine *arr = (Medicine*)malloc(count_element_in_arr * sizeof(Medicine));

    sscanf(date2, "%d%d", &month, &year);

    for(int i = 0; i < count_element_in_arr; i++){
        sscanf(medicines[i].date, "%d%d", &month2, &year2);
        if(year2 > year){
            return NULL;
        }
        else if(year2 == year){
            if(month2 > month){
                return NULL;
            }
            else{
                arr[i] = medicines[i];
            }
        }
        else{
            
        }

    }
}