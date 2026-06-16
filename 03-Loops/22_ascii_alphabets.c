// Question: WAP to print all the ASCII values and their equivalent characters of 26 uppercase alphabets using a while loop.
#include<stdio.h>
int main()
{
    int i = 65; // ASCII value of 'A'
    while(i <= 90) // ASCII value of 'Z'
    {
        char ch = (char)i;
        printf("%c -> %d\n", ch, i);
        i++;
    }
    return 0;
}