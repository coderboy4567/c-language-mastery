/* Question: WAP to print a Palindromic Number Bridge pattern.
    1234321
    123 321
    12   21
    1     1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    for (int i=1; i<=n+1; i++)   printf("%d", i);
    for (int i=n; i>=1; i--)     printf("%d", i);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nst;j++)   
        {
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++)     
        {
            printf(" ");
        }
        for(int l=nst;l>=1;l--)     
        {
            printf("%d",l);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}