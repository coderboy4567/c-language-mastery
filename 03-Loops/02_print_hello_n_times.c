// Question: Print "HELLO WORLD" 'n' times, where 'n' is taken as input from the user.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("HELLO WORLD\n");
    }
    return 0;
}