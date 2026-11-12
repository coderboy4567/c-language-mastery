// Ques: Merge two sorted arrays into a third sorted array without re-sorting.
#include<stdio.h>
int main()
{
    int a[4] = {1, 3, 5, 7};
    int b[4] = {2, 4, 6, 8};
    int res[8];
    
    int i = 0, j = 0, k = 0;
    
    while(i < 4 && j < 4)
    {
        if(a[i] < b[j])
        {
            res[k] = a[i];
            i++;
        }
        else
        {
            res[k] = b[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements of a[] if any
    while(i < 4) res[k++] = a[i++];
    // Copy remaining elements of b[] if any
    while(j < 4) res[k++] = b[j++];
    
    printf("Merged Sorted Array: ");
    for(int m = 0; m < 8; m++) printf("%d ", res[m]);
    printf("\n");
    return 0;
}