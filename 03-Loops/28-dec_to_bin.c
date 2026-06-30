#include <stdio.h>

int main() {
    int n = 25, bin[32], i = 0;
    int temp = n;
    while (temp > 0) {
        bin[i++] = temp % 2;
        temp /= 2;
    }
    printf("Binary of %d: ", n);
    for (int j = i - 1; j >= 0; j--) printf("%d", bin[j]);
    printf("\n");
    return 0;
}