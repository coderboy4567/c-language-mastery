// Question: Print the multiplication table of any number 'n' entered by the user.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Required Table : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",n * i);
    }
    return 0;
}