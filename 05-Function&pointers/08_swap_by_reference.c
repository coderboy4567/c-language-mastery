// Question: WAP to swap two numbers using a function and pointers (Pass by Reference).
#include<stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x; // Dereferencing: value at address x
    *x = *y;   // Putting value at address y into address x
    *y = temp;
    return;
}
int main()
{
    int a = 2;
    int b = 9;
    
    // Passing addresses of a and b
    swap(&a,&b);                                    
    
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0; // Fixed: added missing return statement
}