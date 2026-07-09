// Ques: Swap the elements of the main diagonal with the secondary diagonal in a square matrix.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) scanf("%d", &arr[i][j]);
        
    // Swapping logic
    for(int i=0; i<n; i++)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][n-1-i];
        arr[i][n-1-i] = temp;
    }
    
    printf("\n--- Matrix after swapping diagonals ---\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}