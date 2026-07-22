// Ques: Implement optimized Bubble Sort algorithm using a flag variable.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5] = {25, 65, 35, 78, 20};
    int n = 5;

    printf("Unsorted Array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    // Bubble Sort Logic
    for(int i = 0; i < n - 1; i++)
    {
        bool flag = true; // Optimization: check if swapping happened
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break; // Array is already sorted
    }

    printf("\nSorted Array (Bubble Sort): ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}