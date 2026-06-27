// Question: WAP to convert total minutes into hours and remaining minutes using a single function and pointers.
#include<stdio.h>
void convertTime(int total_mins, int* hrs, int* mins)
{
    *hrs = total_mins / 60;
    *mins = total_mins % 60;
}
int main()
{
    int total_minutes = 145;
    int hours, minutes;
    
    convertTime(total_minutes, &hours, &minutes);
    
    printf("%d minutes = %d Hours and %d Minutes\n", total_minutes, hours, minutes);
    return 0;
}