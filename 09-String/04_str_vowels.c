// Ques: Count the total number of vowels present in a user-entered string.
#include<stdio.h>
int main()
{
    char str[40];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    int vowelcount = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {
            vowelcount++;
        }
        i++;
    }
    printf("The total number of vowels is: %d\n", vowelcount);

    return 0;
}