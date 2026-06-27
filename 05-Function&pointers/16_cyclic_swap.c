// Question: WAP to swap three numbers (a, b, c) in a cyclic order (a->b, b->c, c->a) using pointers.
#include<stdio.h>
void cyclicSwap(int* x, int* y, int* z)
{
    int temp = *y;
    *y = *x;
    *x = *z;
    *z = temp;
}
int main()
{
    int a = 10, b = 20, c = 30;
    printf("Before Swap: a = %d, b = %d, c = %d\n", a, b, c);
    
    cyclicSwap(&a, &b, &c);
    
    printf("After Swap:  a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}