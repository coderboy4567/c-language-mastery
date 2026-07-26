// Ques: Implement Binary Search on a sorted array (O(log N) Time Complexity).
#include<stdio.h>
int main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8;
    int target = 60;
    
    int low = 0, high = n - 1;
    int foundIndex = -1;
    
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        
        if(arr[mid] == target)
        {
            foundIndex = mid;
            break;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    if(foundIndex != -1)
        printf("Element %d found at index: %d\n", target, foundIndex);
    else
        printf("Element not found in the array.\n");
        
    return 0;
}