// Ques: Check if a given substring exists inside a main string manually.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char mainStr[] = "hello adnan";
    char subStr[] = "adnan";
    bool found = false;
    
    for(int i = 0; mainStr[i] != '\0'; i++)
    {
        int j = 0;
        while(subStr[j] != '\0' && mainStr[i+j] == subStr[j])
        {
            j++;
        }
        if(subStr[j] == '\0')
        {
            found = true;
            break;
        }
    }
    
    if(found) printf("Substring found!\n");
    else printf("Substring not found.\n");
    return 0;
}