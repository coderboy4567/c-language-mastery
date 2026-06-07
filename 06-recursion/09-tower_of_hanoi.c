#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of disks (1 or more).\n");
        return 1;
    }

    printf("\nSteps to solve Tower of Hanoi for %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B');

    int totalMoves = (1 << n) - 1;
    printf("\nTotal moves required: %d\n", totalMoves);

    return 0;
}