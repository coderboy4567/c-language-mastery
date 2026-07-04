// Ques: Find the second smallest element in the array in a single pass.
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[6] = {12, 34, 10, 40, 15, 22};
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0; i<6; i++)
    {
        if(arr[i] < min)
        {
            smin = min; 
            min = arr[i];
        }
        else if(arr[i] < smin && arr[i] != min)
        {
            smin = arr[i];
        }
    }
    printf("The second smallest element is: %d\n", smin);
    return 0;
}