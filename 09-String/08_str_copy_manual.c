// Ques: Copy one string to another character-by-character without using strcpy().
#include<stdio.h>
int main()
{
    char s1[] = "BCA Student";
    char s2[20];
    int i = 0;
    
    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0'; // Appending null character at the end
    
    printf("Original String: %s\n", s1);
    printf("Copied String:   %s\n", s2);
    return 0;
}