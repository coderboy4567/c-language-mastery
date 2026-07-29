// Ques: Write a program to input week number (1 - 7) and print day of week name using switch case.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter day number (1-7) : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednasday");
            break;
        case 4:
            printf("thrusday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sanday");
            break;
        default:
            printf("invalid Number");
            break;
    }
    return 0;
}