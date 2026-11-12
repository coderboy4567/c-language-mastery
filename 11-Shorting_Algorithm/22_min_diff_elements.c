// Ques: Find the minimum difference between any two elements in an array using sorting.
#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[6] = {30, 5, 20, 9, 12, 18};
    int n = 6;
    
    // Sort the array (Bubble Sort)
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
    
    int minDiff = INT_MAX;
    for(int i = 0; i < n - 1; i++)
    {
        int diff = arr[i+1] - arr[i];
        if(diff < minDiff) minDiff = diff;
    }
    
    printf("Minimum difference between elements: %d\n", minDiff);
    return 0;
}