/* Question: WAP to print the Floyd's Triangle pattern.
    1 
    2 3 
    4 5 6 
    7 8 9 10 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int a = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
    /* Tip for Practice:
       - Odd Floyd's Triangle ke liye: int a = 1 rakhenge aur a++ ki jagah a = a + 2 karenge.
       - Even Floyd's Triangle ke liye: int a = 2 se start karenge aur a = a + 2 karenge.
    */
    return 0;
}