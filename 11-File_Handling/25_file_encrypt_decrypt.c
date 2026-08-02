// Ques: Basic File Encryption (Caesar Cipher) by shifting character ASCII values.
#include<stdio.h>

int main()
{
    FILE *src = fopen("secret.txt", "w+");
    if(src == NULL) return 1;

    fputs("SecretKey123", src);
    rewind(src);

    FILE *enc = fopen("encrypted.txt", "w");
    char ch;
    int key = 3; // Shift key

    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch + key, enc); // Encryption
    }

    printf("File encrypted successfully!\n");

    fclose(src);
    fclose(enc);
    return 0;
}