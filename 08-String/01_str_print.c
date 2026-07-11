// Ques: Print a character array using a while loop until the null character '\0' is found.
#include<stdio.h>
int main()
{
    char arr[] = {'H','e','l','l','o','\0'};
    int i = 0;
    while(arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
    return 0; 
}