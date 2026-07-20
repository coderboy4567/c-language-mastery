// Ques: Sort an array of structures based on an attribute (sorting books by price using Bubble Sort).
#include<stdio.h>
typedef struct book
{
    char title[20];
    int price;
} book;

int main()
{
    book store[3] = {
        {"C Programming", 450},
        {"Web Dev Manual", 300},
        {"Data Structures", 600}
    };
    
    // Bubble Sort logic to sort by price ascending
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2 - i; j++)
        {
            if(store[j].price > store[j+1].price)
            {
                book temp = store[j];
                store[j] = store[j+1];
                store[j+1] = temp;
            }
        }
    }
    
    printf("Books sorted by price:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%s - Rs.%d\n", store[i].title, store[i].price);
    }
    return 0;
}