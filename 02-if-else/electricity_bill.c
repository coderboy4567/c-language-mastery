#include <stdio.h>

int main() {
    int units = 240;
    float bill = 0;
    if (units <= 100) bill = units * 5;
    else if (units <= 200) bill = (100 * 5) + (units - 100) * 7;
    else bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    printf("Total Electricity Bill for %d units: INR %.2f\n", units, bill);
    return 0;
}