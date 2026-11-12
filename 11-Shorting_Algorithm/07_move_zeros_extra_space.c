// Ques: Move all zeros to the end of the array using an auxiliary array (Extra Space).
#include<stdio.h>
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int ans[9];
    int index = 0;
    
    // Copy all non-zero elements
    for(int i = 0; i < 9; i++)
    {
        if(arr[i] != 0)
        {
            ans[index] = arr[i];
            index++;
        }
    }
    
    // Fill the remaining array with zeros
    while(index < 9)
    {
        ans[index] = 0;
        index++;
    }
    
    printf("Array after moving zeros: ");
    for(int i = 0; i < 9; i++) printf("%d ", ans[i]);
    
    printf("\n");
    return 0;
}