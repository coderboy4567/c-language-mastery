// Ques: Rotate the given array by k steps (where k can be greater than array size).
#include<stdio.h>
void reverse(int arr[], int si, int ei)
{
    for(int i=si,j=ei; i<j; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
    
    int k;
    printf("Enter rotation steps : ");
    scanf("%d",&k);
    
    k = k % n; // Handling cases where k > n
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    
    printf("Rotated array: ");
    for(int i=0; i<n; i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}