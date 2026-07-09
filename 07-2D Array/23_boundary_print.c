// Ques: Print only the boundary (outer frame) elements of a given matrix.
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    
    printf("Enter elements:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &arr[i][j]);
        
    printf("\n--- Boundary Elements ---\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            // Checking if the element is on the edges
            if(i == 0 || i == r-1 || j == 0 || j == c-1)
                printf("%d ", arr[i][j]);
            else
                printf("  "); // Inner elements replace with spaces
        }
        printf("\n");
    }
    return 0;
}