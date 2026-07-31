// Ques: Write a structure variable to a binary file using fwrite().
#include<stdio.h>
typedef struct Student {
    int roll;
    char name[20];
    float marks;
} Student;

int main()
{
    FILE *ptr = fopen("student.dat", "wb"); // Binary write mode
    if(ptr == NULL) return 1;

    Student s1 = {101, "Adnan Sami", 92.5};

    fwrite(&s1, sizeof(Student), 1, ptr);
    printf("Binary record written successfully!\n");

    fclose(ptr);
    return 0;
}