#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    int n;
    printf("Въведете число: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}