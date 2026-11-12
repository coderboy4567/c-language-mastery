// Ques: Take a string input and reverse it in-place using a two-pointer approach.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    int size = 0;
    int k = 0;
    while(str[k] != '\0')
    {
        size++;
        k++;
    }
    
    for(int i=0, j=size-1; i<=j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("The Reverse string is: %s\n", str);
    return 0;
}