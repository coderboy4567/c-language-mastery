// Ques: Take N integers as input dynamically using malloc and display them.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter number of integers you want : ");
    scanf("%d", &n);

    int* ptr = (int*) malloc(n * sizeof(int));
    int* p = ptr;
    
    printf("Enter %d integers:\n", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }
    
    printf("\nYou entered: ");
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", (*p));
        p++;
    }
    printf("\n");
    
    free(p);
    return 0;
}