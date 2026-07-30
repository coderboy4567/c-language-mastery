// Ques: Read text content from an existing file using fopen ('r' mode) and fgets.
#include<stdio.h>
int main()
{
    FILE* ptr = fopen("test.txt", "r");
    
    if(ptr == NULL)
    {
        printf("File not found or cannot be opened!\n");
        return 1;
    }
    
    char str[100];
    printf("--- File Contents ---\n");
    while(fgets(str, 100, ptr) != NULL)
    {
        printf("%s", str);
    }
    
    fclose(ptr);
    return 0;
}