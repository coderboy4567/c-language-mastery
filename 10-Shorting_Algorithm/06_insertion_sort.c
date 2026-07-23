// Ques: Implement Insertion Sort algorithm to sort an array in ascending order.
#include<stdio.h>
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    
    printf("Unsorted array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    // Insertion Sort Logic
    for(int i = 1; i < n; i++)
    {
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    
    printf("\nSorted array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}