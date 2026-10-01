#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define N 20;

typedef struct {
    char name[30];
    long fnum;
    int group;
    float grade;
}STD;

void my_line_flush();
STD inputStd(void);
void outputStd(STD);
void uspeh(STD s[N], int br);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int num = 0;
    int sum = 0;
    STD s[N];
    do{
        printf("Vavedete broi studenti(maksimum do %d)", N);
        scanf("%d",&num);
    }
    while((num>N)(num <= 0));

    for(int i = 0; i < num; i++){
        s[i] = inputStd();
    }
    printf("\nSpisak na studenti: \n");

    for(int i = 0; i < num; i++){
        outputStd(s[i]);
    }
}

void my_line_flush(){
    int ch;
    while((ch=getchar()) !="\n" && ch != EOF);
}

STD inputStd(void){
    STD a;
    printf("Въведете име: ");
    my_line_flush();
    gets(a.name);
    printf("Vavedete fac. num: ");
    scanf("%ld", &a.fnum);
    printf("Vavedete grupa: ");
    scanf("%d", a.group);
    printf("Vavedete uspeh: ");
    scanf("%f", a.grade);
}

void outputStd(STD a){
    printf("Ime - %s", a.name);
    printf("Fac. num - %ld", a.fnum);
    printf("Group - %d", a.group);
    printf("Uspeh - %f", a.grade);
}

void uspeh(STD s[N], int br){
    float sum = 0.0;
    int gr = 0;
    int key;

    printf("Vavedete nomer na grupa: ");
    scanf("%d", &key);
    for(int i = 0; i < br; i++){
        if(s[i].group == key){
            sum += s[i].grade
            gr++;
        }
    }

    if(gr>0){
        printf("Sreden uspeh - %.2f", (sum /gr));
    }
    
}
