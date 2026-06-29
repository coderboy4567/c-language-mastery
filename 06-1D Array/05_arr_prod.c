// Ques: Calculate the product of all elements in an array.
#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int product = 1;
    for(int i=0; i<5; i++)
    {
        product = product * arr[i];
    }
    printf("Product of all elements = %d\n", product);
    return 0;
}