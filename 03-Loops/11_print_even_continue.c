// Question: WAP to print Even numbers from 1 to 100 using the continue statement.
#include<stdio.h>
int main()
{
    // Print odd numbers part (Commented out for practice)
    // for(int i=1;i<=100;i++)
    // {
    //     if(i%2==0)
    //     {
    //         continue;
    //     }
    //     printf("%d ",i);
    // }

    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}