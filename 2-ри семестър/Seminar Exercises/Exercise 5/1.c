#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    double priceForChair = 13.99;
    int countChair = 0;
    double priceForTable8People = 42;
    int countTable = 0;
    double priceFor6Glases = 5.98;
    int countGlass = 0;
    double priceFor6Chinii = 21.02;
    int countChinii = 0;

    int countPeople;
    printf("Въведете брой хора: ");
    scanf("%d", &countPeople);

    int needTables = ceil(countPeople / 8.0);
    int needChairs = countPeople;
    int needSets = ceil(countPeople / 6.0);

    double finalPrice = 0;
    char duma[20];

    while (1) {
        printf("Въведете дума: ");
        scanf("%s", duma);

        if (duma[0]=='P' && duma[1]=='A' && duma[2]=='R' &&
            duma[3]=='T' && duma[4]=='Y' && duma[5]=='!' && duma[6]=='\0')
            break;

        if (duma[0]=='T' && duma[1]=='a' && duma[2]=='b' &&
            duma[3]=='l' && duma[4]=='e' && duma[5]=='\0')
            countTable++;

        else if (duma[0]=='C' && duma[1]=='h' && duma[2]=='a' &&
                 duma[3]=='i' && duma[4]=='r' && duma[5]=='\0')
            countChair++;

        else if (duma[0]=='C' && duma[1]=='u' &&
                 duma[2]=='p' && duma[3]=='s' && duma[4]=='\0')
            countGlass++;

        else if (duma[0]=='D' && duma[1]=='i' && duma[2]=='s' &&
                 duma[3]=='h' && duma[4]=='e' && duma[5]=='s' && duma[6]=='\0')
            countChinii++;
    }

    finalPrice = countChair * priceForChair + countTable * priceForTable8People + countGlass * priceFor6Glases + countChinii * priceFor6Chinii;

    printf("%.2f\n", finalPrice);

    if (countTable < needTables)
        printf("%d Table\n", needTables - countTable);

    if (countChair < needChairs)
        printf("%d Chairs\n", needChairs - countChair);

    if (countChinii < needSets)
        printf("%d Dishes\n", needSets - countChinii);

    if (countGlass < needSets)
        printf("%d Cups\n", needSets - countGlass);

    return 0;
}