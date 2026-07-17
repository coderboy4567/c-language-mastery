// Ques: Create a structure type 'book' with name, price, and page count.
#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int noOfPages;
    } a, b; // Declaring variables right with structure definition

    a.noOfPages = 100;
    a.price = 441.5;
    strcpy(a.name, "secret seven");

    b.noOfPages = 200;
    b.price = 500;
    strcpy(b.name, "vote for me");

    printf("Pages in book A: %d\n", a.noOfPages);
    printf("Price of book B: %f\n", b.price);   
    printf("Name of book A: %s\n", a.name);
    
    return 0; 
}