// Ques: Create a basic self-referential structure (foundation of Linked Lists).
#include<stdio.h>
typedef struct node
{
    int data;
    struct node* next; // Pointer pointing to the structure of same type
} node;

int main()
{
    node n1, n2;
    n1.data = 10;
    n2.data = 20;
    
    n1.next = &n2; // Connecting node 1 to node 2
    n2.next = NULL; // Tail termination
    
    printf("Node 1 Data: %d\n", n1.data);
    printf("Accessing Node 2 data via Node 1 pointer: %d\n", n1.next->data);
    return 0;
}