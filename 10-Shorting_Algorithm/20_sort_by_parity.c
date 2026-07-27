// Ques: Rearrange array elements so that all Even numbers come before Odd numbers in-place.
#include<stdio.h>

int main()
{
    int arr[6] = {3, 1, 2, 4, 7, 6};
    int n = 6;
    
    int left = 0, right = n - 1;
    
    while(left < right)
    {
        if(arr[left] % 2 == 0)
        {
            left++;
        }
        else if(arr[right] % 2 != 0)
        {
            right--;
        }
        else
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    
    printf("Array sorted by parity (Evens first): ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}