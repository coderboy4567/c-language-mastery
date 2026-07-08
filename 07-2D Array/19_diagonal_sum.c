// Ques: Find the sum of principal (main) and secondary diagonals of a square matrix.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) scanf("%d", &arr[i][j]);
    }
    
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    
    for(int i=0; i<n; i++)
    {
        mainDiagonalSum += arr[i][i];       // Condition: i == j
        secondaryDiagonalSum += arr[i][n-1-i]; // Condition: j == n - 1 - i
    }
    
    printf("\nSum of Main Diagonal: %d\n", mainDiagonalSum);
    printf("Sum of Secondary Diagonal: %d\n", secondaryDiagonalSum);
    return 0;
}