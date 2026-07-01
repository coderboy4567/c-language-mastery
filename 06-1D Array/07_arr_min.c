// Ques: Find the minimum value out of all elements in the array.
#include<stdio.h>
#include<limits.h>
int main()
{
    // Method 1: Using arr[0] (Commented out for reference)
    /*
    int arr[5] = {10,2,5,4,3};
    int min = arr[0];
    for(int i=0;i<5;i++)
    {
        if(min>arr[i]) min = arr[i];
    }
    printf("%d",min);
    */

    // Method 2: Safe method using INT_MAX
    int arr[5] = {10,2,5,4,3};
    int min = INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("Min value: %d\n",min);
    return 0;
}