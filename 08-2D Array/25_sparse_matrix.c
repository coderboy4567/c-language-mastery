// Ques: Check if a matrix is a Sparse Matrix (contains more than 50% zero elements).
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int zeroCount = 0;
    
    printf("Enter elements:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0) zeroCount++;
        }
    }
    
    int totalElements = r * c;
    if(zeroCount > (totalElements / 2))
        printf("\nIt is a Sparse Matrix! (Total zeros: %d out of %d)\n", zeroCount, totalElements);
    else
        printf("\nIt is NOT a Sparse Matrix.\n");
        
    return 0;
}