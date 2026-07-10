#include <stdio.h>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int x = 36, y = 60;
    int g = gcd(x, y);
    printf("GCD: %d | LCM: %d\n", g, (x * y) / g);
    return 0;
}