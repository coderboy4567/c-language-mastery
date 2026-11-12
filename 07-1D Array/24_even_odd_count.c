// Ques: Count the total number of even and odd elements present in the array.
#include<stdio.h>
int main()
{
    int arr[6] = {11, 22, 33, 44, 55, 66};
    int evenCount = 0, oddCount = 0;
    for(int i=0; i<6; i++)
    {
        if(arr[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    printf("Total Even elements: %d\n", evenCount);
    printf("Total Odd elements: %d\n", oddCount);
    return 0;
}