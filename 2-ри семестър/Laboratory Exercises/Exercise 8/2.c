#include <stdio.h>
#include <locale.h>
#include <Windows.h>

struct cars {
    char brand[20];
    char color[20];
};

typedef struct {
    struct cars car;
    char type[20];
} cr;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");
    cr arr[100];
    int n;

    printf("Въведете брой превозни средства: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Марка: ");
        scanf("%s", arr[i].car.brand);

        printf("Цвят: ");
        scanf("%s", arr[i].car.color);

        do {
            printf("Тип (car/motor/boat/plane): ");
            scanf("%s", arr[i].type);
        } while (
            strcmp(arr[i].type, "car") != 0 &&
            strcmp(arr[i].type, "motor") != 0 &&
            strcmp(arr[i].type, "boat") != 0 &&
            strcmp(arr[i].type, "plane") != 0
        );
    }

    for (int i = 0; i < n - 1; i++) {
        if (strcmp(arr[i].car.brand, arr[i + 1].car.brand) == 0) {
            printf("Марките са еднакви\n");
        } else {
            printf("Марките са различни\n");
        }
    }

    return 0;
}