// Ques: Find the unique number in an array where all elements appear twice except one.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {1, 3, 6, 1, 5, 3, 5};
    for(int i=0; i<7; i++)
    {
        bool flag = false; 
        for(int j=0; j<7; j++)
        {
            if(i == j) continue; 
            if(arr[i] == arr[j]) 
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            printf("%d is the unique number\n", arr[i]);
            break;
        }
    }
    return 0;
}