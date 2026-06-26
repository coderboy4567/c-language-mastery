#include <stdio.h>

int main() {
    int num = 145, temp = num, sum = 0;
    while (temp > 0) {
        int d = temp % 10, fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    printf("%d is %s\n", num, (sum == num) ? "a Strong Number" : "not a Strong Number");
    return 0;
}