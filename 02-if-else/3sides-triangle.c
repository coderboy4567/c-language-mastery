/*Take 3 numbers input and tell if they can be the sides of a triangle*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st side : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd side : ");
    scanf("%d", &b);
    int c;
    printf("Enter 3rd side : ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}