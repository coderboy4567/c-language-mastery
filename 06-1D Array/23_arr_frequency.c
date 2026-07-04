// Ques: Count the total frequency (occurrences) of a specific number x in the array.
#include<stdio.h>
int main()
{
    int arr[8] = {2, 4, 6, 2, 8, 2, 10, 4};
    int x, count = 0;
    printf("Enter number to find its frequency: ");
    scanf("%d", &x);
    for(int i=0; i<8; i++)
    {
        if(arr[i] == x) count++;
    }
    printf("%d appears %d times in the array.\n", x, count);
    return 0;
}