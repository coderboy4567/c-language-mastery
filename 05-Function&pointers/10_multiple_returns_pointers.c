// Question: WAP to calculate the sum, product, and average of two numbers using a single function and pointers (returning multiple values).
#include<stdio.h>
void calculate(int x, int y, int* s, int* p, float* avg)
{
    *s = x + y;       // Direct update in main's sum variable
    *p = x * y;       // Direct update in main's prod variable
    *avg = (float)(x + y) / 2; // Direct update in main's average variable
}
int main()
{
    int a = 6, b = 4;
    int sum, prod;
    float average;
    
    // Passing values of a, b and addresses of sum, prod, average
    calculate(a, b, &sum, &prod, &average);
    
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", prod);
    printf("Average = %.2f\n", average);
    
    return 0;
}