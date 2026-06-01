// This is a calculation code like volumeOfSphere Formula V=4/3πr3 //
#include<stdio.h>
int main()
{
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float valume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    printf("The valume is : %f",valume);
    return 0;
}