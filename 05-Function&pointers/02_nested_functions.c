// Question: WAP to demonstrate nested function calls (calling one function from inside another).
#include<stdio.h>
void england()
{
    printf("You Are in England\n");
    return;
}
void australia()
{
    printf("You are in Australia\n");
    england(); // Calling england from australia
    return;
}
void india()
{
    printf("You are in India\n");
    australia(); // Calling australia from india
    return;
}
int main()
{
    india(); // Calling india from main
    return 0;
}