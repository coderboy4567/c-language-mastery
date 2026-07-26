// Ques: Sort an array of strings in alphabetical order using Bubble Sort and strcmp().
#include<stdio.h>
#include<string.h>

int main()
{
    char names[5][20] = {"Kasid", "Adnan", "Belal", "Satyam", "Ahmad"};
    int n = 5;
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(names[j], names[j+1]) > 0)
            {
                char temp[20];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    
    printf("Alphabetically Sorted Names:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}