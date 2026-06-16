// Question: WAP to find the value of one number raised to the power of another (a^b) using a loop.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    int power = 1;
    for(int i=1;i<=b;i++)
    {
        power = power * a;
    }
    printf("%d raised to the power %d is %d\n",a,b,power);
    return 0;
}