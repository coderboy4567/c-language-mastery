// Ques: Dynamically allocate memory for a structure variable using malloc.
#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
    int id;
    int salary;
} employee;

int main()
{
    // Memory allocation in heap area
    employee* emp = (employee*)malloc(sizeof(employee));
    
    if(emp == NULL)
    {
        printf("Memory Full!\n");
        return 1;
    }
    
    emp->id = 101;
    emp->salary = 45000;
    
    printf("Dynamic Employee -> ID: %d, Salary: %d\n", emp->id, emp->salary);
    
    free(emp); // Cleaning up memory
    return 0;
}