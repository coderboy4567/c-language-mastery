#include <stdio.h>

int josephus(int n, int k) {
    if (n == 1) return 1;
    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int n = 7, k = 3;
    printf("Safe position for n=%d, k=%d is: %d\n", n, k, josephus(n, k));
    return 0;
}