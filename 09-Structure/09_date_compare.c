// Ques: Create a structure 'date' and write a logic to compare if two date variables are equal or not.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    
    date a, b;
    
    a.day = 7;   a.month = 6;   a.year = 2005;
    b.day = 7;   b.month = 6;   b.year = 2005;

    bool flag = true; // true means same
    
    if(a.day != b.day)     flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year)   flag = false;

    if(flag == true) 
        printf("The Dates are same!\n");
    else 
        printf("The dates are different.\n");
        
    return 0;
}