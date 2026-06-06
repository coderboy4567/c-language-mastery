#include <stdio.h>

int main()
{
    int cp, sp;
    printf("Enter Cost Price: ");
    scanf("%d", &cp);
    printf("Enter Selling Price: ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("Profit = %d", sp - cp);
    }
    else
    {
        if (cp > sp)
        {
            printf("Loss = %d", cp - sp);
        }
        else
        {
            printf("No Profit No Loss");
        }
    }
    return 0;
}