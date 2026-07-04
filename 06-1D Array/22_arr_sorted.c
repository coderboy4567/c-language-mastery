// Ques: Check if the given array is sorted in ascending order or not.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5] = {1, 5, 8, 12, 20};
    bool isSorted = true;
    for(int i=0; i<4; i++)
    {
        if(arr[i] > arr[i+1])
        {
            isSorted = false;
            break;
        }
    }
    if(isSorted) printf("The array is sorted!\n");
    else printf("The array is not sorted.\n");
    
    return 0;
}