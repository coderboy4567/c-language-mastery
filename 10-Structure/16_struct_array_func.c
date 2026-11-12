// Ques: Pass an array of structures to a function to find the student with highest percentage.
#include<stdio.h>
typedef struct student
{
    char name[20];
    float percent;
} student;

void findTopper(student arr[], int size)
{
    int topperIdx = 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[i].percent > arr[topperIdx].percent)
        {
            topperIdx = i;
        }
    }
    printf("Topper is %s with %.2f%%\n", arr[topperIdx].name, arr[topperIdx].percent);
}

int main()
{
    student class[3] = {
        {"Adnan", 88.5},
        {"Kasid", 82.3},
        {"Ali", 79.4}
    };
    findTopper(class, 3);
    return 0;
}