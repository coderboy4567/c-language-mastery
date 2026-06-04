/*Take positive integer input and tell if it is a three digit number or not.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("This number is three digit ");
    }
    else{
        printf("This number is not three digit");
    }
    
    return 0;
}