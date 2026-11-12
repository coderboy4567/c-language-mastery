// Ques: Create an array of structures to store and display the exam records of 5 students.
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct students
    {
        char name[20];
        int RollNumber;
        float Percentage;
        char result;
    } students;

    students arr[5];
    
    strcpy(arr[0].name, "Adnan Sami");
    arr[0].RollNumber = 1;
    arr[0].Percentage = 85.45;
    arr[0].result = 'A';

    strcpy(arr[1].name, "Kasid Irfan");
    arr[1].RollNumber = 2;
    arr[1].Percentage = 70.25;
    arr[1].result = 'A';

    strcpy(arr[2].name, "Ahmad Ali");
    arr[2].RollNumber = 3;
    arr[2].Percentage = 55.12;
    arr[2].result = 'B';

    strcpy(arr[3].name, "Satyam Kumar");
    arr[3].RollNumber = 4;
    arr[3].Percentage = 45.25;
    arr[3].result = 'C';

    strcpy(arr[4].name, "Belal");
    arr[4].RollNumber = 5;
    arr[4].Percentage = 30.25;
    arr[4].result = 'F';

    printf("--- Students Exam Data ---\n");
    for(int i=0; i<5; i++)
    {
        printf("Name: %s | Roll No: %d | Info: %.2f%% | Grade: %c\n", 
               arr[i].name, arr[i].RollNumber, arr[i].Percentage, arr[i].result);
    }
    return 0;
}