// Ques: Read a 2D matrix of integers stored inside a text file and print its sum of rows.
#include<stdio.h>

int main()
{
    FILE *ptr = fopen("matrix.txt", "r");
    if(ptr == NULL)
    {
        // Creating a 3x3 matrix sample file
        ptr = fopen("matrix.txt", "w+");
        fprintf(ptr, "1 2 3\n4 5 6\n7 8 9\n");
        rewind(ptr);
    }

    int mat[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            fscanf(ptr, "%d", &mat[i][j]);
        }
    }

    printf("--- Row-wise Sum of Matrix from File ---\n");
    for(int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for(int j = 0; j < 3; j++)
        {
            rowSum += mat[i][j];
            printf("%d ", mat[i][j]);
        }
        printf(" | Sum = %d\n", rowSum);
    }

    fclose(ptr);
    return 0;
}