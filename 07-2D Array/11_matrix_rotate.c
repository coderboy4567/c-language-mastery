// Ques: Rotate a square matrix 90 degrees clockwise (In-place transpose + Row reverse).
#include<stdio.h>
int main()
{
    int n;
    printf("Enter row and column : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("-- Enter all the elements --\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    }
    
    // Step 1: Transpose the matrix
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    // Step 2: Reverse each row
    for(int i=0;i<n;i++)
    {
        int j = 0;
        int k = n - 1;
        while(j<k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    
    printf("\n-- Matrix after 90 degree clockwise rotation --\n");
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