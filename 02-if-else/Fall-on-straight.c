/*Given three points (x1, y1), (x2, y2), and (x3, y3), write a program to check if all the
three points fall on one straight line. */
#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
    {
        printf("All three points lie on a straight line.");
    }
    else
    {
        printf("The points do NOT lie on a straight line.");
    }

    return 0;
}