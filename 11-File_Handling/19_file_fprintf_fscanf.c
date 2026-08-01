// Ques: Perform formatted input and output in a file using fprintf() and fscanf().
#include<stdio.h>

int main()
{
    FILE *ptr = fopen("scores.txt", "w+");
    if(ptr == NULL) return 1;

    // Formatted write
    fprintf(ptr, "%s %d %.2f\n", "Adnan", 101, 95.5);
    fprintf(ptr, "%s %d %.2f\n", "Kasid", 102, 88.0);

    rewind(ptr); // Move to start

    char name[20];
    int id;
    float score;

    printf("--- Formatted Data Read ---\n");
    while(fscanf(ptr, "%s %d %f", name, &id, &score) != EOF)
    {
        printf("Name: %s | ID: %d | Score: %.2f\n", name, id, score);
    }

    fclose(ptr);
    return 0;
}