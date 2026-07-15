// Ques: Check if a given string contains only numeric digits or not.
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char str[] = "98745";
    bool isNumeric = true;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        // Agar koi bhi character '0' se '9' ke beech nahi hai, toh false
        if(str[i] < '0' || str[i] > '9')
        {
            isNumeric = false;
            break;
        }
    }
    
    if(isNumeric) 
        printf("The string contains only digits.\n");
    else 
        printf("The string contains non-numeric characters.\n");
        
    return 0;
}