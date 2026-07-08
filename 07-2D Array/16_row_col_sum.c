// Ques: Print the sum of each individual row and column of a matrix.
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    
    printf("Enter matrix elements:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) scanf("%d", &arr[i][j]);
    }
    
    // Row sum calculation
    printf("\n--- Row-wise Sum ---\n");
    for(int i=0; i<r; i++)
    {
        int rowSum = 0;
        for(int j=0; j<c; j++) rowSum += arr[i][j];
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
    
    // Column sum calculation
    printf("\n--- Column-wise Sum ---\n");
    for(int j=0; j<c; j++)
    {
        int colSum = 0;
        for(int i=0; i<r; i++) colSum += arr[i][j];
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
    return 0;
}