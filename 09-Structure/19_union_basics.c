// Ques: Demonstrate the memory difference between a Structure and a Union.
#include<stdio.h>
struct SetA {
    int x;
    char y;
};

union SetB {
    int x;
    char y;
};

int main()
{
    struct SetA s;
    union SetB u;
    
    printf("Structure size: %lu bytes (Har element ki apni alag memory)\n", sizeof(s));
    printf("Union size:     %lu bytes (Sabse bade element jitni shared memory)\n", sizeof(u));
    
    u.x = 65; 
    printf("Shared impact -> u.x = %d, u.y = %c\n", u.x, u.y); // Ek ko badla toh dusra bhi badal gaya
    return 0;
}