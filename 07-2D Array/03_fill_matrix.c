// Ques: Store a user-defined fixed value at every index of a 2D matrix.
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    
    int arr[r][c];
    int value;
    printf("Enter the value to print at every index : ");
    scanf("%d", &value);
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
           arr[i][j] = value;
        }
    }
    
    printf("\n--- Matrix filled with value ---\n");
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