// Ques: Return the sum of a sub-rectangle matrix from coordinates (l1,r1) to (l2,r2).
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
    }
    
    int l1, r1, l2, r2;
    printf("Enter starting coordinates (l1 and r1): ");
    scanf("%d %d", &l1, &r1);
    printf("Enter ending coordinates (l2 and r2): ");
    scanf("%d %d", &l2, &r2);
    
    int sum = 0;
    for(int i = l1; i <= l2; i++)
    {
        for(int j = r1; j <= r2; j++) sum += arr[i][j];
    }
    printf("\n--- Result ---\n");
    printf("The sum of the rectangle from (%d,%d) to (%d,%d) is: %d\n", l1, r1, l2, r2, sum);
    return 0;
}