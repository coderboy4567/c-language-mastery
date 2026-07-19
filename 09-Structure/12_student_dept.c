// Ques: Create a function to check if two students belong to the same department using structure comparison.
#include<stdio.h>
#include<string.h>
typedef struct student
{
    int RollNo;
    char name[20];
    char dept[50];
    char course[30];
    int yearOfJoining;
} student;

void check(student s1, student s2)
{
    if(strcmp(s1.dept, s2.dept) == 0) 
        printf("Result: Both students are in the same department.\n");
    else 
        printf("Result: Both students are in different departments.\n");
}

int main()
{
    student s1, s2;
    s1.RollNo = 10;
    strcpy(s1.name, "Adnan Sami");
    strcpy(s1.dept, "BCA");
    strcpy(s1.course, "Computer Science");
    s1.yearOfJoining = 2024;
    
    s2.RollNo = 5;
    strcpy(s2.name, "Kasid Irfan");
    strcpy(s2.dept, "B.Tech");
    strcpy(s2.course, "Computer Science");
    s2.yearOfJoining = 2024;

    printf("Comparing departments of %s and %s...\n", s1.name, s2.name);
    check(s1, s2);
    return 0;
}