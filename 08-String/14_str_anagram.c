// Ques: Check if two strings are Anagrams (contain same characters in different order like "listen" & "silent").
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char s1[] = "listen";
    char s2[] = "silent";
    int freq[26] = {0};
    
    for(int i = 0; s1[i] != '\0'; i++) freq[s1[i] - 'a']++;
    for(int i = 0; s2[i] != '\0'; i++) freq[s2[i] - 'a']--;
    
    bool isAnagram = true;
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            isAnagram = false;
            break;
        }
    }
    
    if(isAnagram) printf("Strings are Anagrams.\n");
    else printf("Strings are NOT Anagrams.\n");
    return 0;
}