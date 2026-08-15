#include <stdio.h>

void towerOfHanoi(int n, char source, char helper, char dest) {
    if (n == 0) return;
    towerOfHanoi(n - 1, source, dest, helper);
    printf("Move disk %d from %c to %c\n", n, source, dest);
    towerOfHanoi(n - 1, helper, source, dest);
}

int main() {
    int disks = 3;
    towerOfHanoi(disks, 'A', 'B', 'C');
    return 0;
}