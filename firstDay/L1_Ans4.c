/*
4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.
*/

#include<stdio.h>

int main(){

    int op1 ,op2;
    char ch;
    printf("Enter the operand 1\n");
    scanf("%d",&op1);
    printf("Enter the operator\n");
    scanf(" %c",&ch);
    printf("Enter the operand 2\n");
    scanf("%d",&op2);
    switch(ch){
        case '+':
            printf("The sum is : %d", op1+op2);
            break;
        case '-':
            printf("The difference is : %d", op1-op2);
            break;
        case '*':
            printf("The multiplication is : %d", op1*op2);
            break;
        case '/':
            printf("The remainder is : %f", (float)(op1/op2));
            break;
        default:
            printf("You Chose wrong input by Choice\n");
            break;
    }
    return 0;
}