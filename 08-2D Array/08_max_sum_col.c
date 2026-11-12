// Ques: Print the column number that has the maximum sum in a matrix.
#include<stdio.h>
#include<limits.h>
int main()
{
    int r, c;
    printf("Enter no of row : ");
    scanf("%d",&r);
    printf("Enter no of column : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Element\n");
    int max_sum = INT_MIN;
    int max_col_idx = -1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) scanf("%d",&arr[i][j]);
    }
    
    // Column-wise traversal
     for(int j=0;j<c;j++)
    {
        int sum = 0;
        for(int i=0;i<r;i++)
        {
            sum += arr[i][j];
        }
        if(sum > max_sum)
        {
            max_sum = sum;
            max_col_idx = j;
        }
    }
    printf("\n--- Result ---\n");
    printf("Column with maximum sum is Col: %d\n", max_col_idx);
    printf("Maximum sum value: %d\n", max_sum);
    return 0;
}