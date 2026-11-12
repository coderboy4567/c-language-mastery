// Ques: Check if the given array is a palindrome or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int i = 0;
    int j = n - 1;
    int isPalindrome = 1; 
    
    while(i < j)
    {
        if(arr[i] != arr[j]) 
        {
            isPalindrome = 0; 
            break; 
        }
        i++;
        j--;
    }
    
    if(isPalindrome == 1)
        printf("Yes, it is a Palindrome!\n");
    else
        printf("No, it is not a Palindrome.\n");
        
    return 0;
}