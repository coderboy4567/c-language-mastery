// Ques: Demonstrate structure padding and how memory alignment affects the size of a structure.
#include<stdio.h>
struct rawData
{
    char c;   // 1 byte
    int i;    // 4 bytes (but takes padding bytes before alignment)
    char d;   // 1 byte
};

int main()
{
    struct rawData sample;
    // Idealy 1+4+1 = 6 bytes hona chahiye tha, par padding ke karan zyaada aayega
    printf("Size of structure with padding: %lu bytes\n", sizeof(sample));
    return 0;
}