// Ques: Search for an element x in the array and print its first index.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int x;
    printf("Enter the number to search: ");
    scanf("%d", &x);
    
    int idx = -1;
    bool flag = false; 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            flag = true; 
            idx = i;     
            break;       
        }
    }
    
    if(flag == false) printf("%d is not present in the array\n", x);
    else printf("%d is present at FIRST index %d\n", x, idx);
    
    return 0;
}