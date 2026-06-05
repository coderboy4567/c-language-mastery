#include <stdio.h>

int main() {
    int a = 15, b = 27;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    int max = (a > b) ? a : b;
    printf("Swapped: a = %d, b = %d | Max: %d\n", a, b, max);
    return 0;
}