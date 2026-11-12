// Ques: Sort each row of a 2D matrix independently in ascending order.
#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {9, 2, 7},
        {5, 1, 3},
        {8, 6, 4}
    };
    
    // Row-wise sorting
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2 - j; k++)
            {
                if(arr[i][k] > arr[i][k+1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                }
            }
        }
    }
    
    printf("Matrix after sorting individual rows:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}