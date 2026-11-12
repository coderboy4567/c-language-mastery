// Ques: Basic input and output of a 2D array (Matrix).
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter Number of rows : ");
    scanf("%d",&r);
    printf("Enter Number of columns : ");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) 
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\n--- Matrix Elements ---\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) 
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}