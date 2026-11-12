// Ques: Store roll number and marks of students side by side in a matrix.
#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter no of students : ");
    scanf("%d",&r);
    printf("Enter no of columns (2 for Roll No & Marks) : ");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter Roll No and Marks for %d students:\n", r);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) scanf("%d",&arr[i][j]);
    }
    
    printf("\n--- Result Matrix ---\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}