// Ques: Count inversions in an array (pairs (i, j) where i < j and arr[i] > arr[j]).
#include<stdio.h>

int main()
{
    int arr[5] = {8, 4, 2, 1, 6};
    int n = 5;
    int invCount = 0;
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                invCount++;
            }
        }
    }
    
    printf("Total Inversion Count: %d\n", invCount);
    return 0;
}