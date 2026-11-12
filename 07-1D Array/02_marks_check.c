// Ques: Print the roll numbers (indices) of students who scored more than 35.
#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter marks for roll Number %d: ", i);
        scanf("%d", &marks[i]);
    }
    
    for(int i=0; i<5; i++)
    {
        if(marks[i] > 35) 
        {
            printf("Roll number %d is perfect\n", i);
        }
    }
    return 0;
}