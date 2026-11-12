// Ques: Find maximum product of three numbers in an array (LeetCode - 628).
#include<stdio.h>

int main()
{
    int arr[5] = {-10, -10, 5, 2, 8};
    int n = 5;
    
    // Sort array
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Max product can be from 3 largest positive numbers OR 2 smallest negatives * 1 largest positive
    int prod1 = arr[n-1] * arr[n-2] * arr[n-3];
    int prod2 = arr[0] * arr[1] * arr[n-1];
    
    int maxProd = (prod1 > prod2) ? prod1 : prod2;
    
    printf("Maximum product of 3 numbers: %d\n", maxProd);
    return 0;
}