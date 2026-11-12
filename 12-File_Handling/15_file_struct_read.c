// Ques: Read a structure record from a binary file using fread().
#include<stdio.h>
typedef struct Student {
    int roll;
    char name[20];
    float marks;
} Student;

int main()
{
    FILE *ptr = fopen("student.dat", "rb"); // Binary read mode
    if(ptr == NULL)
    {
        printf("Binary file not found!\n");
        return 1;
    }

    Student s1;
    fread(&s1, sizeof(Student), 1, ptr);

    printf("--- Binary Record Read ---\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.roll, s1.name, s1.marks);

    fclose(ptr);
    return 0;
}