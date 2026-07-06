// Ques: Given a binary matrix (0-1 only), find the row index with the max number of 1s.
#include<stdio.h>
int main()
{
    int arr[3][4] = {{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    int maxCount = 0;
    int maxIdx = -1;
    for(int i=0;i<3;i++)
    {
        int Count = 0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1) Count++;
        }
        if(maxCount<Count)
        {
            maxCount = Count;
            maxIdx = i;
        }
    }
    printf("Row Number (0-based Index) : %d\n", maxIdx);
    printf("Row Number (Human Readable): Row %d\n", maxIdx + 1);
    printf("Total number of 1's        : %d\n", maxCount);
    return 0;
}