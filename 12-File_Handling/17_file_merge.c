// Ques: Merge the contents of two text files into a third destination file.
#include<stdio.h>

int main()
{
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *f3 = fopen("merged.txt", "w");

    if(f1 == NULL || f2 == NULL || f3 == NULL) return 1;

    char ch;
    while((ch = fgetc(f1)) != EOF) fputc(ch, f3);
    while((ch = fgetc(f2)) != EOF) fputc(ch, f3);

    printf("Both files merged into merged.txt successfully!\n");

    fclose(f1); fclose(f2); fclose(f3);
    return 0;
}