// Ternary Operator
// formula -> Expression1 ? Expression2 : Expression3
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    n%2==0 ? printf("Even Number") : printf("Odd Number");
    return 0;
}