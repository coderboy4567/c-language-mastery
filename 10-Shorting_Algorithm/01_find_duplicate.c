// Ques: Find duplicate element in an array of size n+1 containing numbers from 1 to n.
#include<stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 3};
    int n = 7;
    
    int actual_sum = 0;
    for(int i = 0; i < 8; i++)
    {
        actual_sum += arr[i];
    }
    
    int expected_sum = n * (n + 1) / 2;
    int duplicate = actual_sum - expected_sum;
    
    printf("The duplicate element is: %d\n", duplicate);
    return 0;
}