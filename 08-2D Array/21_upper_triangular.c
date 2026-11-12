// Ques: Check if a given square matrix is an Upper Triangular Matrix (all elements below main diagonal are 0).
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
    
    bool isUpper = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            // Condition: if row index is greater than column index, value must be 0
            if(i > j && arr[i][j] != 0)
            {
                isUpper = false;
                break;
            }
        }
    }
    
    if(isUpper) printf("\nIt is an Upper Triangular Matrix!\n");
    else printf("\nIt is NOT an Upper Triangular Matrix.\n");
    return 0;
}