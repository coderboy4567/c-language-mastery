// Ques: Use bit-fields in structures to optimize memory consumption for small data ranges (like flags).
#include<stdio.h>
struct statusWithoutBits {
    unsigned int status1;
    unsigned int status2;
};

struct statusWithBits {
    unsigned int status1 : 1; // Uses only 1 bit (0 or 1)
    unsigned int status2 : 1; // Uses only 1 bit
};

int main()
{
    printf("Normal structure size: %lu bytes\n", sizeof(struct statusWithoutBits));
    printf("Bit-field structure size: %lu bytes\n", sizeof(struct statusWithBits));
    return 0;
}