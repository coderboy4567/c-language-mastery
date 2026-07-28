// Ques: Implement Counting Sort algorithm for non-negative small integer ranges (O(N+K) time).
#include<stdio.h>

int main()
{
    int arr[7] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    
    int max = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] > max) max = arr[i];
    
    int count[10] = {0}; // Frequency array up to max element
    
    for(int i = 0; i < n; i++) count[arr[i]]++;
    
    printf("Sorted Array (Counting Sort): ");
    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            printf("%d ", i);
            count[i]--;
        }
    }
    printf("\n");
    return 0;
}