// Ques: Find the single missing element from a range of 1 to N.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    int expectedSum = n * (n + 1) / 2;
    int arr[n - 1]; 
    int currentSum = 0;
    
    printf("Enter %d elements:\n", n - 1);
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        currentSum = currentSum + arr[i]; 
    }
    
    int missingNumber = expectedSum - currentSum;
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}