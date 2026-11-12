// Ques: Search student record in a binary database file by Roll Number.
#include<stdio.h>

typedef struct Student {
    int roll;
    char name[20];
} Student;

int main()
{
    FILE *ptr = fopen("db.dat", "wb+");
    if(ptr == NULL) return 1;

    Student s[2] = {{1, "Adnan"}, {2, "Kasid"}};
    fwrite(s, sizeof(Student), 2, ptr);

    int searchRoll = 2, found = 0;
    rewind(ptr);

    Student temp;
    while(fread(&temp, sizeof(Student), 1, ptr))
    {
        if(temp.roll == searchRoll)
        {
            printf("Found Student! Roll: %d, Name: %s\n", temp.roll, temp.name);
            found = 1;
            break;
        }
    }

    if(!found) printf("Student record not found.\n");
    fclose(ptr);
    return 0;
}