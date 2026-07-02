// Ques: Reverse an array without using any extra array (In-place transformation).
#include<stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 6; // pointing to the last index of 7-element array
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr);
    
    printf("In-place reversed array: ");
    for(int i=0; i<7; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}