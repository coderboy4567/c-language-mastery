// Ques: Demonstrate random access in files using fseek(), ftell(), and rewind().
#include<stdio.h>
int main()
{
    FILE *ptr = fopen("demo.txt", "w+"); // Read and Write mode
    fputs("Hello World", ptr);

    // Get current position (End of file)
    printf("File size/position: %ld bytes\n", ftell(ptr));

    // Move cursor to beginning using rewind
    rewind(ptr);

    // Move cursor 6 bytes ahead from start
    fseek(ptr, 6, SEEK_SET);

    char str[20];
    fgets(str, 20, ptr);
    printf("Text from position 6: %s\n", str);

    fclose(ptr);
    return 0;
}