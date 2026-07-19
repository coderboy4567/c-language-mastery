// Ques: Write a program to add two coordinates (X, Y) using a function that returns a complete structure type.
#include<stdio.h>
typedef struct Point
{
    int x;
    int y;
} Point;

Point addPoints(Point p1, Point p2)
{
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result; // Returning a full structure variable back to main
}

int main()
{
    Point pt1 = {5, 8};
    Point pt2 = {3, 4};
    Point sum;
    
    sum = addPoints(pt1, pt2);
    
    printf("Resultant Coordinate -> X: %d, Y: %d\n", sum.x, sum.y);
    return 0;
}