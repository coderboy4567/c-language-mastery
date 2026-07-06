// Ques: Find the row and column indices of both maximum and minimum elements in a 2D array.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n, m;
    printf("Enter no of rows : ");
    scanf("%d", &n);
    printf("Enter no of columns : ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
    }
    
    printf("\n--- Result ---\n");
    int max_value = INT_MIN; 
    int min_value = INT_MAX;
    int max_row, max_col;
    int min_row, min_col;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] > max_value) 
            {
                max_value = arr[i][j];
                max_row = i; 
                max_col = j; 
            }
            if(arr[i][j] < min_value) 
            {
                min_value = arr[i][j];
                min_row = i; 
                min_col = j; 
            }
        }
    }
    printf("Max element: %d (at row %d, col %d)\n", max_value, max_row, max_col);
    printf("Min element: %d (at row %d, col %d)\n", min_value, min_row, min_col);
    return 0;
}