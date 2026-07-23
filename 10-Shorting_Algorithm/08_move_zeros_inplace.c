// Ques: Move all zeros to the end of the array in-place without making a copy (Bubble Sort Variant).
#include<stdio.h>
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int n = 9;
    
    printf("Original Array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    // Pushing zeros to the right
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nArray after in-place zero push: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}