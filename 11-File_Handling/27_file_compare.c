// Ques: Compare two files character by character to check if they are identical.
#include<stdio.h>
#include<stdbool.h>

int main()
{
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");

    if(f1 == NULL || f2 == NULL)
    {
        printf("Error opening files for comparison!\n");
        return 1;
    }

    char ch1, ch2;
    bool isSame = true;

    while(1)
    {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);

        if(ch1 != ch2)
        {
            isSame = false;
            break;
        }

        if(ch1 == EOF || ch2 == EOF)
            break;
    }

    if(isSame)
        printf("Both files are exactly identical!\n");
    else
        printf("Files are different.\n");

    fclose(f1);
    fclose(f2);
    return 0;
}