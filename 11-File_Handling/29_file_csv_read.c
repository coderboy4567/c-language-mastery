// Ques: Read CSV-formatted student records (Roll, Name, Marks) line by line from a text file.
#include<stdio.h>

int main()
{
    FILE *ptr = fopen("students.csv", "r");
    if(ptr == NULL)
    {
        printf("CSV File not found!\n");
        return 1;
    }

    int roll;
    char name[30];
    float marks;

    printf("--- CSV Data Table ---\n");
    // Format: Roll, Name, Marks (comma separated)
    while(fscanf(ptr, "%d,%29[^,],%f\n", &roll, name, &marks) != EOF)
    {
        printf("Roll: %d | Name: %-15s | Marks: %.2f\n", roll, name, marks);
    }

    fclose(ptr);
    return 0;
}