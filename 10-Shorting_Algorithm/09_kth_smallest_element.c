// Ques: Find the Kth smallest element in an array using K passes of Selection Sort.
#include<stdio.h>
int main()
{
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;
    int k = 3;
    
    printf("Original Array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    // Selection sort runs only k times
    for(int i = 0; i < k; i++)
    {
        int minidx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[minidx] > arr[j])
            {
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    
    printf("\n\nThe %drd smallest element is: %d\n", k, arr[k-1]);
    return 0;
}