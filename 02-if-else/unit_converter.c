#include <stdio.h>

int main() {
    int choice = 1;
    float val = 37.0;
    switch (choice) {
        case 1: printf("%.2f C = %.2f F\n", val, (val * 9 / 5) + 32); break;
        case 2: printf("%.2f KM = %.2f Miles\n", val, val * 0.621371); break;
        case 3: printf("INR %.2f = USD %.2f\n", val, val / 84.0); break;
        default: printf("Invalid option\n");
    }
    return 0;
}