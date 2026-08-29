#include <stdio.h>

int countPaths(int m, int n) {
    if (m == 1 || n == 1) return 1;
    return countPaths(m - 1, n) + countPaths(m, n - 1);
}

int main() {
    printf("Total paths in 3x3 grid: %d\n", countPaths(3, 3));
    return 0;
}