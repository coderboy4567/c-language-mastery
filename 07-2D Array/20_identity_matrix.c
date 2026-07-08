// Ques: Check if a given square matrix is an Identity Matrix.
#include<stdio.h>
#include<stdbool.h>
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
    
    bool isIdentity = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j && arr[i][j] != 1) isIdentity = false; // Diagonals must be 1
            if(i != j && arr[i][j] != 0) isIdentity = false; // Rest must be 0
        }
    }
    
    if(isIdentity) printf("\nIt is an Identity Matrix!\n");
    else printf("\nIt is NOT an Identity Matrix.\n");
    return 0;
}