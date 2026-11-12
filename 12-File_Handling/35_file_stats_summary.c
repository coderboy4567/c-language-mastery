// Ques: Read a file containing integers and compute total count, sum, average, maximum, and minimum.
#include<stdio.h>
#include<limits.h>

int main()
{
    FILE *ptr = fopen("scores_list.txt", "r");
    if(ptr == NULL)
    {
        ptr = fopen("scores_list.txt", "w+");
        fprintf(ptr, "45 78 92 34 88 59 76\n");
        rewind(ptr);
    }

    int val, count = 0, sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    while(fscanf(ptr, "%d", &val) != EOF)
    {
        count++;
        sum += val;
        if(val > max) max = val;
        if(val < min) min = val;
    }

    if(count > 0)
    {
        printf("--- File Statistics Summary ---\n");
        printf("Total Integers: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", (float)sum / count);
        printf("Maximum Value: %d\n", max);
        printf("Minimum Value: %d\n", min);
    }
    else
    {
        printf("File is empty.\n");
    }

    fclose(ptr);
    return 0;
}