// Ques: Demonstrate macros and macro functions for circle area calculation and high precision floating point output.
#include<stdio.h>
#define PI 3.14159265359 // macros
#define area(r) (PI*r*r) // macro function

int main()
{
    double x = 3.14159265359;
    printf("%.15f\n",x); // float me 6 place hi print hota hai, isliye precision ke liye %.15f use kiya.

    printf("%f",area(10));
    return 0;
}