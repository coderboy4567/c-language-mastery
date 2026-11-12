// Ques: Create a structure containing an array as an attribute to store marks of 3 subjects.
#include<stdio.h>
typedef struct reportCard
{
    char studentName[20];
    int marks[3]; // Array inside structure
} reportCard;

int main()
{
    reportCard r = {"Adnan Sami", {85, 90, 95}};
    int total = 0;
    
    for(int i = 0; i < 3; i++)
    {
        total += r.marks[i];
    }
    
    printf("Student: %s | Total Marks: %d/300\n", r.studentName, total);
    return 0;
}