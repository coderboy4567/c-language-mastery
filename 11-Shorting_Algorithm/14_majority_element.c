// Ques: Find the majority element (appears more than n/2 times) using sorting.
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[7] = {2, 2, 1, 1, 2, 2, 3};
    int n = 7;
    
    // Sort the array first (Bubble Sort)
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
    
    // After sorting, the majority element will always be at index n/2
    int candidate = arr[n / 2];
    
    printf("Majority Element is: %d\n", candidate);
    return 0;
}