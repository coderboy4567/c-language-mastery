// Question: Display this decreasing Geometric Progression (GP) - 100, 50, 25... upto 'n' terms using float.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    float a = 100;
    for(int i=1;i<=n;i++)
    {
        printf("%f ",a);
        a = a/2;
    }
    return 0;
}