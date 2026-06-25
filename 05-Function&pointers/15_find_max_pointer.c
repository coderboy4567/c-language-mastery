// Question: WAP to find the maximum number between two integers using pointers and a function.
#include<stdio.h>
void findMax(int* num1, int* num2, int* max)
{
    if(*num1 > *num2)
        *max = *num1;
    else
        *max = *num2;
}
int main()
{
    int a, b, max;
    printf("Enter two numbers to find max: ");
    scanf("%d %d", &a, &b);
    
    // Passing addresses to findMax function
    findMax(&a, &b, &max);
    
    printf("The maximum number is: %d\n", max);
    return 0;
}