// Ques: Count how many elements are greater than a given number x.
#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int x;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &x);
    
    for(int i=0; i<8; i++) 
    {
        if(arr[i] > x) count++;
    }
    
    printf("Number of elements greater than %d are: %d\n", x, count);
    return 0;
}