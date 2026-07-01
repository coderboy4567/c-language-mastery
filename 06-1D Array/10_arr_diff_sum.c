// Ques: Find the difference between the sum of elements at even indices and odd indices.
#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int evenNum = 0; 
    int oddNum = 0;  
    for(int i=0;i<7;i++)
    {
        if(i%2==0) evenNum += arr[i];
        else oddNum += arr[i];
    }
    int minus = evenNum - oddNum;
    printf("Difference between even and odd index sum: %d\n",minus);
    return 0;
}