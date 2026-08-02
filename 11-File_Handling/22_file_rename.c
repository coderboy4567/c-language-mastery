// Ques: Rename an existing file using rename() function.
#include<stdio.h>

int main()
{
    char oldName[] = "old_notes.txt";
    char newName[] = "final_notes.txt";

    // Creating dummy file
    FILE *f = fopen(oldName, "w");
    if(f != NULL) fclose(f);

    if(rename(oldName, newName) == 0)
        printf("File renamed from '%s' to '%s'!\n", oldName, newName);
    else
        printf("Error renaming file.\n");

    return 0;
}