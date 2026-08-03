// Ques: Read numbers from 'numbers.txt' and separate odd numbers into 'odd.txt' and even numbers into 'even.txt'.
#include<stdio.h>

int main()
{
    FILE *fin = fopen("numbers.txt", "r");
    FILE *feven = fopen("even.txt", "w");
    FILE *fodd = fopen("odd.txt", "w");

    if(fin == NULL || feven == NULL || fodd == NULL)
    {
        printf("Error creating or opening files!\n");
        return 1;
    }

    int num;
    while(fscanf(fin, "%d", &num) != EOF)
    {
        if(num % 2 == 0)
            fprintf(feven, "%d\n", num);
        else
            fprintf(fodd, "%d\n", num);
    }

    printf("Numbers successfully separated into even.txt and odd.txt!\n");

    fclose(fin);
    fclose(feven);
    fclose(fodd);
    return 0;
}