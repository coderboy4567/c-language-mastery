// Ques: Search for a specific word in a text file and print line number if found.
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr = fopen("notes.txt", "r");
    if(ptr == NULL) return 1;

    char temp[100];
    char target[] = "engineer";
    int lineNumber = 1, found = 0;

    while(fgets(temp, sizeof(temp), ptr) != NULL)
    {
        if(strstr(temp, target) != NULL)
        {
            printf("Found '%s' at Line %d: %s", target, lineNumber, temp);
            found = 1;
        }
        lineNumber++;
    }

    if(!found) printf("Word '%s' not found in file.\n", target);
    fclose(ptr);
    return 0;
}