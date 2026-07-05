// Ques: Find the total sum of all elements in a given matrix of n x m.
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    printf("Enter no of columns : ");
    scanf("%d",&m);
    
    int arr[n][m];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) scanf("%d",&arr[i][j]);
    }
    
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) sum += arr[i][j];
    }
    printf("\nThe sum of the given matrix is: %d\n", sum);
    return 0;
}