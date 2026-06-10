// Question: Display this Arithmetic Progression (AP) - 4, 7, 10, 13, 16... upto 'n' terms without using direct maths formula.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    // Using an extra variable 'a' to track the terms
    int a = 4;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}