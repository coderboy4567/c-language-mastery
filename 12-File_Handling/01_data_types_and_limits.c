// Ques: Demonstrate 64-bit integers (long long), limits from limits.h, sqrt function, and proper format specifiers.
#include<stdio.h>
#include<math.h>
#include<limits.h>

int main()
{
    // 1. long long use kiya taaki pakka 64-bit mile
    long long x = 2147483648LL; 
    int y = INT_MAX;
    float z = sqrt(10);
    
    // 2. LLONG_MAX use kiya long long ki limit dekhne ke liye
    long long c = LLONG_MAX; 

    // 3. Print karne ke liye %ld ki jagah %lld lagaya
    printf("%lld\n", x);
    printf("%d\n", y);
    printf("%f\n", z);
    printf("%lld\n", c);

    return 0;
}