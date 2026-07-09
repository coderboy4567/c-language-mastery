// Ques: Check if two matrices are exactly equal (same dimensions and same elements).
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if(r1 != r2 || c1 != c2)
    {
        printf("\nMatrices cannot be compared (Dimensions are different).\n");
        return 0;
    }
    
    int a[r1][c1], b[r2][c2];
    printf("Enter elements of 1st matrix:\n");
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++) scanf("%d", &a[i][j]);
        
    printf("Enter elements of 2nd matrix:\n");
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++) scanf("%d", &b[i][j]);
        
    bool isEqual = true;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            if(a[i][j] != b[i][j])
            {
                isEqual = false;
                break;
            }
        }
    }
    
    if(isEqual) printf("\nBoth matrices are exactly equal!\n");
    else printf("\nMatrices are not equal.\n");
    return 0;
}