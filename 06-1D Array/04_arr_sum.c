// Ques: Calculate the sum of all elements in an array.
#include<stdio.h>
int main()
{
    int arr[5] = {1, 5, 4, 2, 5};
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of elements = %d\n", sum);
    return 0;
}