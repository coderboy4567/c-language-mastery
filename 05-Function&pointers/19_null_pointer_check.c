// Question: WAP to demonstrate the concept of a NULL pointer and how to safely check it before dereferencing.
#include<stdio.h>
int main()
{
    int* ptr = NULL; // Initializing pointer with nothing (Good programming practice)
    
    printf("NULL pointer ki address value: %p\n", ptr);
    
    // Safely checking before accessing to avoid Segmentation Fault (runtime crash)
    if(ptr != NULL)
    {
        printf("Value: %d\n", *ptr);
    }
    else
    {
        printf("Alert: Pointer NULL hai, ise dereference nahi kiya ja sakta!\n");
    }
    
    return 0;
}