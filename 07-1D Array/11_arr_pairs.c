// Ques: Find the total number of pairs in the array whose sum is equal to X.
#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totalPairs = 0;
    int x = 12;
    
    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<8; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                totalPairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("Total number of pairs: %d\n", totalPairs);
    return 0;
}