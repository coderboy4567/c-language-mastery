// Ques: Sort an array in Wave Form such that arr[0] >= arr[1] <= arr[2] >= arr[3]...
#include<stdio.h>

int main()
{
    int arr[6] = {10, 90, 49, 2, 1, 50};
    int n = 6;
    
    for(int i = 0; i < n; i += 2)
    {
        // Compare with left element
        if(i > 0 && arr[i-1] > arr[i])
        {
            int temp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = temp;
        }
        // Compare with right element
        if(i < n - 1 && arr[i+1] > arr[i])
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    
    printf("Wave Form Array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}