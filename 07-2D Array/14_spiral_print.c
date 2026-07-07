// Ques: Print all elements of an n x m matrix in a spiral order.
#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d",&m, &n);
    int a[m][n];
    printf("Enter elements of matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    }
    
    printf("\n-- Spiral Output --\n");
    int minr = 0, maxr = m-1;
    int minc = 0, maxc = n-1;
    int tne = m*n;
    int count = 0; 
    
    while(count < tne)
    {
        // Traverse minimum row
        for(int j=minc; j<=maxc && count<tne; j++)
        {
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        
        // Traverse maximum column
        for(int i=minr; i<=maxr && count<tne; i++)
        {
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        
        // Traverse maximum row
        for(int j=maxc; j>=minc && count<tne; j--)
        {
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--; 
        
        // Traverse minimum column
        for(int i=maxr; i>=minr && count<tne; i--)
        {
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
    printf("\n");
    return 0;
}