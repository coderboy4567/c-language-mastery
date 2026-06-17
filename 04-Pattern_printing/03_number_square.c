// Question: WAP to print a square number pattern where each row prints from 1 to 'n'.
#include<stdio.h>
int main()
{
   int n;
   printf("Enter no. of lines : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++)
   {
    for(int j=1; j<=n; j++)
    {
        printf("%d",j);
    }
    printf("\n");
   }  
    return 0;
}