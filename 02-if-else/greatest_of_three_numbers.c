//Take three positive integers as input and print the greatest among them.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest number", a);
        }
        else
        {
            printf("%d is the greatest number", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the greatest number", b);
        }
        else
        {
            printf("%d is the greatest number", c);
        }
    }
    return 0;
}