// Ques: Find the maximum value out of all elements in the array.
#include<stdio.h>
#include<limits.h>
int main()
{
    // Method 1: Using arr[0] (Commented out for reference)
    /*
    int arr[5] = {1,2,3,4,5};
    int max = arr[0];
    for(int i=0;i<5;i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    printf("%d",max);
    */

    // Method 2: Safe method using INT_MIN
    int arr[5] = {-1,-2,-3,-4,-5};
    int max = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max value: %d\n",max);
    return 0;
}