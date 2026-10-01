#include <stdio.h>

int x = 5;
float y = 3.2; //така зададено типът не е float, а го приема за double
float y2 = 3.2f; // така го приема за float, а не за double
double z = 2.9;
char str[] = "word";
int thisIsFalse = 0; // дава False
int thisIsTrue = 1; //дава True 

// #include <stdbool.h> - Това ми дава достъп до тип bool 
// int x;- Така само дефинира променлива
// x = 4; - Така инициализира променливата 

// Променливите, които са извън main метода, са глобални, а тези, които са в него са локални за метода
// int main(){
// }

// printf("...") - string
// printf(,...,) - char

int main() {
    int num = 10;
    printf("%d", num);

    int a = 5;
    printf("%d", a++);
    printf("%d", ++a);

    switch (a)
    {
    case 1:
        /* code */
        break;
    default:
        break;
    }
    
    for(int w = 0; w <5; w++){
        printf("%d", w);
    }

    int a = 5;
    int b = 7;
    while(a<b){

    }
    
    
    // int nums [10]= {1,2,3,4,5,6,7,8,9,10};
    int nums[10];
    for(int i = 0; i < 10; i++)
    {
        nums[i] = i+1;
    }

    int min = nums[0];
    for(int i = 1; i < 10; i++)
    {
        if(nums[i] < min){
            min = nums[i];
        }
    }
}

// %d - Принтира цели числа
// #f - Принтира числа тип float
// %lf - Принтира double 
// %c - Принтира char
// $s - Принтира масив от char-ове (string)

// Лява асоциация - +, -, *, /, %
// Дясна асоциация - =  и степенуване 

// ==
// != 

// a++ = a + 1
// ++a = 1 + a

//&& - оператор и 
// || - оператор или 


