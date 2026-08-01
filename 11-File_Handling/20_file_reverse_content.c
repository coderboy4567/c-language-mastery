// Ques: Print the contents of a file in reverse order using fseek().
#include<stdio.h>

int main()
{
    FILE *ptr = fopen("data.txt", "r");
    if(ptr == NULL) return 1;

    fseek(ptr, 0, SEEK_END);
    long length = ftell(ptr);

    printf("Reversed File Content:\n");
    for(long i = length - 1; i >= 0; i--)
    {
        fseek(ptr, i, SEEK_SET);
        printf("%c", fgetc(ptr));
    }
    printf("\n");

    fclose(ptr);
    return 0;
}