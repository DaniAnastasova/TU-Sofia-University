#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    int n; 
    printf("Въведете стойност: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Въведете число: ");
        scanf("%d", &arr[i]);
    }

    int maxLen = 1, currLen = 1;
    int startIndex = 0, tempStart = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            currLen++;
        } else {
            if(currLen > maxLen){
                maxLen = currLen;
                startIndex = tempStart;
            }
            currLen = 1;
            tempStart = i;
        }
    }

    if(currLen > maxLen){
        maxLen = currLen;
        startIndex = tempStart;
    }

    printf("Начало: %d\n", startIndex);
    printf("Дължина: %d\n", maxLen);
}