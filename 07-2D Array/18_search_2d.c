// Ques: Search for an element x in a 2D matrix and print its position.
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    
    printf("Enter elements:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) scanf("%d", &arr[i][j]);
    }
    
    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    int found = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j] == x)
            {
                printf("Element %d found at Row %d, Column %d\n", x, i+1, j+1);
                found = 1;
                break;
            }
        }
    }
    
    if(!found) printf("Element %d is not present in the matrix.\n", x);
    return 0;
}