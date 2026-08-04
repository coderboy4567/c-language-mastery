// Ques: Open a binary student database file and update a specific student's marks by roll number using fseek.
#include<stdio.h>

typedef struct {
    int roll;
    float marks;
} Record;

int main()
{
    FILE *ptr = fopen("records.dat", "rb+");
    if(ptr == NULL)
    {
        printf("Binary record file not found! Creating a dummy one.\n");
        ptr = fopen("records.dat", "wb+");
        Record dummy = {1, 88.5};
        fwrite(&dummy, sizeof(Record), 1, ptr);
        rewind(ptr);
    }

    Record r;
    int targetRoll = 1;
    int found = 0;

    while(fread(&r, sizeof(Record), 1, ptr))
    {
        if(r.roll == targetRoll)
        {
            r.marks = 99.0; // Updated marks
            // Move file pointer back by one record size to overwrite
            fseek(ptr, -sizeof(Record), SEEK_CUR);
            fwrite(&r, sizeof(Record), 1, ptr);
            found = 1;
            break;
        }
    }

    if(found)
        printf("Record for Roll %d successfully updated in binary file!\n", targetRoll);
    else
        printf("Roll number not found.\n");

    fclose(ptr);
    return 0;
}