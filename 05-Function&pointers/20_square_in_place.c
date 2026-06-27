// Question: WAP to calculate the square of a number \"in-place\" (modifying the original variable itself) using pointers.
#include<stdio.h>
void makeSquare(int* num)
{
    *num = (*num) * (*num); // Squaring the value at the address
}
int main()
{
    int n = 7;
    printf("Original Number: %d\n", n);
    
    makeSquare(&n);
    
    printf("Square of the number (In-place modified): %d\n", n);
    return 0;
}