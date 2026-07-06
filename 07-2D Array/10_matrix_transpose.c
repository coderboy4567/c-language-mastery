// Ques: Convert a square matrix into its transpose in-place using swapping.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter row and column size : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter all the elements\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    }
    
    // In-place transpose logic
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    printf("\n--- Transposed Matrix ---\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) 
        {
            printf("%d ",arr[i][j]);
        }
         printf("\n");
    }
    return 0;
}