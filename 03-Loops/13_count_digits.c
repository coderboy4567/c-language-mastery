// Question: WAP to count the total number of digits of a given integer.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    printf("The Total number is %d",count);
    return 0;
}