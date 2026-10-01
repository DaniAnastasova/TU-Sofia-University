#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

struct points{
    int x;
    int y;
    int z;
};

int Distance(struct points a, struct points b);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int n;
    printf("Въведете брой точки: ");
    scanf("%d", &n);

    struct points point[100];

    for(int i = 0; i < n; i++){
        printf("Въведете стойности за x, y,z на дадената точка: ");
        scanf("%d%d%d", &point[i].x, &point[i].y,&point[i].z);
    }

    if(n < 3){
        printf("Трябва да имаме над 3 точки за направата на триъгълник!");
    }
    else{ 
        struct points A = point[0];
        struct points B = point[1];
        struct points C = point[2];

        float AB = Distance(A, B);
        float BC = Distance(B, C);
        float AC = Distance(A,C);

        printf("%.2f", AB);
        printf("%.2f", BC);
        printf("%.2f", AC);
    }

}

int Distance(struct points a, struct points b){
    int c = 0;
    c = sqrt(
        (a.x - b.x) * (a.x - b.x) +
        (a.y - b.y) * (a.y - b.y) +
        (a.z - b.z) * (a.z - b.z)
    );
    return c;
}

