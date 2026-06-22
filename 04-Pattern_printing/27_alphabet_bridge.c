/* Question: WAP to print an Alphabet Bridge pattern.
    ABCDEFG
    ABC EFG
    AB   FG
    A     G
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nst = n;
    int nsp = 1;
    for(int i=1;i<=2*n+1;i++)      
    {
        printf("%c",64+i);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int a = 1;
        for(int j=1;j<=nst;j++)    
        {
            printf("%c",64+a);
            a++;
        }
        for(int k=1;k<=nsp;k++)     
        {
            printf(" ");
            a++;
        }
        for(int l=1;l<=nst;l++)     
        {
            printf("%c",64+a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}