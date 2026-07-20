// Ques: Calculate the total bill item price inside a function by passing structure pointers.
#include<stdio.h>
typedef struct item
{
    char itemName[20];
    int qty;
    float rate;
} item;

void calculateBill(item* prod)
{
    float total = prod->qty * prod->rate;
    printf("Product: %s | Total Cost: Rs.%.2f\n", prod->itemName, total);
}

int main()
{
    item order = {"Laptop Stand", 2, 750.50};
    calculateBill(&order);
    return 0;
}