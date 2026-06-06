/*if the ages of Adnan, Ahmad and Kasid are input through the keyboard, 
  write a program to determine the youngest of the three*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age of Adnan : ");
    scanf("%d",&a);
    int b;
    printf("Enter the age of Ahmad : ");
    scanf("%d",&b);
    int c;
    printf("Enter the age of Kasid : ");
    scanf("%d",&c);
    // if (a < b && a < c)
    // {
    //     printf("%d is Youngest", a);
    // }
    // if (b < a && b < c)
    // {
    //     printf("%d is Youngest", b);
    // }
    // if (c < a && c < b)
    // {
    //     printf("%d is Youngest", c);
    // }

    // nested if else contition
    if(a<b){
        if(a<c)
        printf("%d is youngest",a);
        else 
        printf("%d is youngest",c);
    }
    else{
        if(b<c)
        printf("%d is youngest",b);
        else
        printf("%d is youngest",c);
    }
    return 0;
}