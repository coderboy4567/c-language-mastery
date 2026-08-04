// Ques: Scan a text file and extract lines that contain an email address format (containing '@').
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr = fopen("contacts.txt", "r");
    if(ptr == NULL)
    {
        // Creating a dummy file if not present
        ptr = fopen("contacts.txt", "w+");
        fputs("Support team contact: support@techgurukul.com\n", ptr);
        fputs("Random text without handle\n", ptr);
        fputs("Admin email: admin.master@domain.org\n", ptr);
        rewind(ptr);
    }

    char line[150];
    printf("--- Extracted Email Lines ---\n");

    while(fgets(line, sizeof(line), ptr) != NULL)
    {
        if(strchr(line, '@') != NULL)
        {
            printf("%s", line);
        }
    }

    fclose(ptr);
    return 0;
}