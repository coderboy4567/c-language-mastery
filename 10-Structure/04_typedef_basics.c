// Ques: Demonstrate the basic use of 'typedef' to create aliases for standard data types.
#include<stdio.h>
typedef int Integer;
typedef float RealNumber;
int main()
{
    Integer x = 5;
    RealNumber y = 10.125;
    
    printf("Integer x: %d\n", x);
    printf("RealNumber y: %f\n", y);
    return 0;
}