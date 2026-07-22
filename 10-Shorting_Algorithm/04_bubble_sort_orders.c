// Ques: Sort an unsorted array in both Ascending and Descending order using Bubble Sort.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5] = {4, 2, 1, 5, 3};
    int n = 5;

    printf("Unsorted Order: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    // Ascending Order Sort
    for(int i = 0; i < n - 1; i++)
    {
        bool flag = true;
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
        if(flag) break;   
    }

    printf("\nAscending Order: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    // Descending Order Sort
    for(int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag) break;   
    }

    printf("\nDescending Order: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}