// Ques: Print the memory addresses of all array elements.
#include<stdio.h>
int main()
{
    int arr[4] = {1, 1, 2, 1};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    return 0;
}