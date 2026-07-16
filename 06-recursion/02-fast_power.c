#include <stdio.h>

long long power(long long x, int n) {
    if (n == 0) return 1;
    long long half = power(x, n / 2);
    return (n % 2 == 0) ? half * half : x * half * half;
}

int main() {
    printf("2^10 = %lld\n", power(2, 10));
    return 0;
}