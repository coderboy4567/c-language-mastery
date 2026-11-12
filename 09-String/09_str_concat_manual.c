// Ques: Concatenate (join) two strings together manually without using strcat().
#include<stdio.h>
int main()
{
    char s1[50] = "Tech ";
    char s2[] = "Gurukul";
    
    int i = 0;
    while(s1[i] != '\0') i++; // Moving pointer to the end of first string
    
    int j = 0;
    while(s2[j] != '\0')
    {
        s1[i] = s2[j]; // Appending s2 characters
        i++;
        j++;
    }
    s1[i] = '\0'; 
    
    printf("Joined String: %s\n", s1);
    return 0;
}