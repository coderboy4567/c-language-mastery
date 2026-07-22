// Ques: Find two numbers in a sorted array that add up to a specific target (Two Pointer Approach).
#include<stdio.h>
int main()
{
    int target = 8;
    int n = 8;
    int arr[8] = {1, 2, 3, 4, 5, 8, 9, 10};
    
    int i = 0;
    int j = n - 1;
    
    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            printf("Target sum found: %d and %d\n", arr[i], arr[j]);
            break;
        }
        else if(arr[i] + arr[j] > target) 
            j--;
        else 
            i++;
    }
    return 0;
}