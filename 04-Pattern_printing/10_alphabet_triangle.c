/* Question: Print the given pattern:
    A 
    A B 
    A B C 
    A B C D 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch = (char)(64 + j);
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}