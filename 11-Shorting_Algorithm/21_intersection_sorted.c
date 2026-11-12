// Ques: Find the intersection of two sorted arrays using two-pointer technique.
#include<stdio.h>

int main()
{
    int a[6] = {1, 2, 3, 3, 4, 6};
    int b[4] = {2, 3, 5, 6};
    
    int i = 0, j = 0;
    printf("Intersection of Arrays: ");
    
    while(i < 6 && j < 4)
    {
        if(a[i] < b[j]) i++;
        else if(b[j] < a[i]) j++;
        else
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    printf("\n");
    return 0;
}