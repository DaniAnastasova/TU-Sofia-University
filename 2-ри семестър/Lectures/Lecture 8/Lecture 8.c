#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    struct Node{
        int num;
        struct Node *next;
    };

    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *current = NULL;

    for(int i = 0; i < 5; i++){
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->num = i;
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            current = head;
        }
        else{
            //Начин 1
            // current -> next = temp;
            // current = temp;

            //Начин 2
            temp -> next = head;
            head = temp;
        }
    }
    
//Начин 1
//     current = head;
//     while(current -> next != NULL){
//         current = current -> next;
//     }
//     temp = (struct Node*)malloc(sizeof(struct Node));
//     temp -> num = 5;
//     temp -> next = NULL;
//     current ->next = temp;

//     int pos;
//     printf("Enter the position: ");
//     scanf("%d", &pos);
//     current = head;
//     temp = (struct Node*)malloc(sizeof(struct Node));
//     temp -> num = 90;
//     temp ->next = NULL;
//     for(int i = 0; i < pos-2; i++){
//         current = current -> next;
//     }
//    temp -> next = current->next;
//    current-> next = temp;

    current = head;
    for(int i = 0; i <7; i++){
        printf("%d ", current -> num);
        current = current -> next;
    }

}