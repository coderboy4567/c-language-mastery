// Ques: Multiply odd indexed elements by 2 and add 10 to even indexed elements.
#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        if(i%2!=0) arr[i] *= 2;
        else arr[i] += 10;
    }
    
    printf("Modified array: ");
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}