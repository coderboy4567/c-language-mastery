// Ques: Compare two strings manually to check if they are identical without using strcmp().
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    
    int i = 0;
    bool isEqual = true;
    
    while(s1[i] != '\0' || s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            isEqual = false;
            break;
        }
        i++;
    }
    
    if(isEqual) printf("Strings are identical.\n");
    else printf("Strings are different.\n");
    
    return 0;
}