// Ques: Generate an n x n square matrix filled with elements from 1 to n^2 in spiral order.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    int a[n][n];
    
    int minr = 0, maxr = n-1;
    int minc = 0, maxc = n-1;
    int tne = n*n;
    int value = 1; 
    
    while(value <= tne)
    {
        for(int j=minc; j<=maxc && value<=tne; j++)
        {
            a[minr][j] = value;
            value++;
        }
        minr++;
        
        for(int i=minr; i<=maxr && value<=tne; i++)
        {
            a[i][maxc] = value;
            value++;
        }
        maxc--;
        
        for(int j=maxc; j>=minc && value<=tne; j--)
        {
            a[maxr][j] = value;
            value++;
        }
        maxr--; 
        
        for(int i=maxr; i>=minr && value<=tne; i--)
        {
           a[i][minc] = value;
           value++;
        }
        minc++;
    }
    
    printf("\n-- Generated Spiral Matrix --\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]); 
        }
        printf("\n");
    }
    return 0;
}