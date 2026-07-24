#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num = 9875;
    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));
    return 0;
}