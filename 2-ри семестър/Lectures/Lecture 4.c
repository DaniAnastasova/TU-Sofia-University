#include <stdio.h>

// void func (int *x) {
//      (*x)++;
//      printf("%d \n", *x);
// }

int main()
{
   // Указатели  
   // int x = 5; - заделена памет 
   // int *p = &x;

   // p         x
   // 200       5
   // 400      200

   // *p -> 5 - стойност на х
   // p -> 200 - адрес на х
   // &p -> 400 - адрес на указателя

   // *p++ -> 
   // p++ -> 
   // &p++ -> 
   // * - дава стойност 
   // & - дава адрес 

   // int - 4 or 8 byte

//    int nums[10];
//    int *p = nums;
//    printf("%d", nums);
   // %p - адрес

   // char a = 'k';
   // char *p = &a;
   // a++;
   // printf("%c", a);

   // return 0;

   // int arr[] = {1,2,3,4,5};
   // int arr2[5];
   // printf("%d \n", arr); // името на масива е указател (адрес) на масива. Принтира адреса на масива
   // printf("%d \n", &arr); // Принтира адреса на масива
   // printf("%d \n", arr[2]); // дава стойността на зададения индекс

   // int len = sizeof(arr2) / sizeof(int);

   // scanf("%d", &arr2[0]);
   // printf("%d \n", arr2[0]);

   // for (int i = 0; i < len; i++){
   //    scanf("%d", &arr2[i]);
   //    printf("%d \n", arr2[i]);
   // }

   char name[] = "Ivan";
   printf("%s\n", name);
   // char newName[10];
   // strcpy(newName, name);
   // printf(newName);
   char newName[] = "Petranka";
   int check = strlen(newName);
   printf("%d \n", check);
   return 0;
}