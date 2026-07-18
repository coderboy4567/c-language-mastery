// Ques: Take input for 5 cricketers' details using an array of structures and display them.
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[20];
        char Lastname[20];
        int age;
        int nOfMatches;
        float avarage;
    } cricketer;
    
    cricketer arr[5];
    for(int i=0; i<5; i++)
    {
        printf("\n--- Enter details for Cricketer %d ---\n", i+1);
        printf("Enter Firstname : ");
        scanf("%s", arr[i].firstname);
        printf("Enter Lastname  : ");
        scanf("%s", arr[i].Lastname);
        printf("Enter Age       : ");
        scanf("%d", &arr[i].age);
        printf("Enter Matches   : ");
        scanf("%d", &arr[i].nOfMatches);
        printf("Enter Average   : ");
        scanf("%f", &arr[i].avarage);
    }
    
    printf("\n--- Cricketers Database --- \n");
    for(int i=0; i<5; i++)
    {
        printf("Name: %s %s | Age: %d | Matches: %d | Avg Runs: %.2f\n", 
               arr[i].firstname, arr[i].Lastname, arr[i].age, arr[i].nOfMatches, arr[i].avarage);
    }
    return 0;
}