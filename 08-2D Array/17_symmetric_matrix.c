// Ques: Check if a square matrix is Symmetric (matrix equal to its transpose).
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) scanf("%d", &arr[i][j]);
    }
    
    bool isSymmetric = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] != arr[j][i]) // Comparing element with its transpose counterpart
            {
                isSymmetric = false;
                break;
            }
        }
    }
    
    if(isSymmetric) printf("\nThe matrix is Symmetric!\n");
    else printf("\nThe matrix is NOT Symmetric.\n");
    return 0;
}