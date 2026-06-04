/* Given the length and breadth of a rectangle, write a program to find 
   weather the area of the rectangle is greater than its perimeter */
#include<stdio.h>
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth : ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2 * (l + b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    if(a<p){
        printf("Area is not greater than perimeter");
    }
    if (a==p)
    {
        printf("Area and perimeter are equal");
    }
    
    return 0;
}