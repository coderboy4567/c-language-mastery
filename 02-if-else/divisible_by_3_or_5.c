//Take a positive integer as input and check whether it is divisible by 3 or 5.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("This number is divisible by 5 or 3");
    }
    else{
        printf("This number is not divisible by 5 or 3");
    }
    return 0;
}