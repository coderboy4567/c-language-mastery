// Ques: Sort an array of 0s, 1s, and 2s in-place (Dutch National Flag Algorithm).
#include<stdio.h>
int main()
{
    int arr[9] = {2, 0, 1, 2, 1, 0, 1, 2, 0};
    int n = 9;
    
    int low = 0, mid = 0, high = n - 1;
    
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else // arr[mid] == 2
        {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    
    printf("Sorted 0s, 1s and 2s: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}