// Ques: Perform basic string compression using the counts of repeated characters (Run-Length Encoding).
// Example: "aaabbccca" -> "a3b2c3a1"
#include<stdio.h>
int main()
{
    char str[] = "aaabbccca";
    
    printf("Compressed String: ");
    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        // Jab tak consecutive characters same hain, count badhate jao
        while(str[i] == str[i+1])
        {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
    return 0;
}