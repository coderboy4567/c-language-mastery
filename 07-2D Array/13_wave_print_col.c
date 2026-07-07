// Ques: Print the elements of a matrix in a column-wise wave structure.
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
    
    printf("\n-- Column Wave Output --\n");
    for(int j=0;j<n;j++)
    {
        if(j%2 == 0)
        {
            for(int i=m-1; i>=0; i--) printf("%d ",a[i][j]);
        }
        else
        {
            for(int i=0; i<m; i++) printf("%d ",a[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}