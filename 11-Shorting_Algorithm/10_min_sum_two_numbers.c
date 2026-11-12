// Ques: Find the minimum possible sum of two numbers formed using all digits of an array.
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[6] = {6, 8, 4, 5, 2, 3};
    int n = 6;
    
    printf("Original Digits: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    // Step 1: Sort array in ascending order (Bubble Sort)
    for(int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if(flag) break;
    }
    
    // Step 2: Build two numbers by picking alternate digits
    int num1 = 0;
    int num2 = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            num1 = (num1 * 10) + arr[i];
        else
            num2 = (num2 * 10) + arr[i];
    }
    
    int minSum = num1 + num2;
    
    printf("\n\nSorted Digits: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n\nNumber 1 formed: %d", num1);
    printf("\nNumber 2 formed: %d", num2);
    printf("\n\nThe Minimum Possible Sum is: %d\n", minSum);
    
    return 0;
}