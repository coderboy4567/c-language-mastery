// Ques: Create a basic calculator performing arithmetic operations (+, -, *, /) using switch case based on user input operator.
#include<stdio.h>

int main()
{
    int a;      // operand
    scanf("%d",&a);
    char ch;    // +, -, *, / -> operator
    scanf("%c",&ch);
    int b;      // operand
    scanf("%d",&b);

    switch(ch)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%f",(float)a/b);
            break;
        default:
            printf("Invalid Operator");
            break;
    }

    return 0;
}