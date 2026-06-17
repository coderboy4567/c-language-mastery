// Question: WAP to print a solid rectangle of stars with 'n' rows and 'm' columns.
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows   : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
   
    return 0;
}