// Ques: Implement Selection Sort algorithm by finding the minimum element in unsorted array.
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;

    printf("Unsorted Array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    // Selection Sort Logic
    for(int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        
        for(int j = i; j < n; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        // Swap minimum element with first element of unsorted part
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted Array (Selection Sort): ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}