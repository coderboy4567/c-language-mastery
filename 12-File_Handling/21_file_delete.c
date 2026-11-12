// Ques: Delete a file from system storage using remove() function.
#include<stdio.h>

int main()
{
    char filename[] = "temp_cache.txt";

    // Creating dummy file first
    FILE *f = fopen(filename, "w");
    if(f != NULL) fclose(f);

    // Deleting the file
    if(remove(filename) == 0)
        printf("File '%s' deleted successfully!\n", filename);
    else
        printf("Error: Unable to delete file.\n");

    return 0;
}