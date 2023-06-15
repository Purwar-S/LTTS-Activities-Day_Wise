/*
Ques-1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator
*/

#include<stdio.h>

int big_IE(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int big_TO(int a ,int b){
    int ret = (a>b) ? a : b;
    return ret;
}

int main(){

    int a,b;
    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n", &b);
    scanf("%d",&b);
    printf("The biggest number using if else is : %d\n",big_IE(a,b));
    printf("The biggest number using ternary operator is : %d\n",big_TO(a,b));
    return 0;

}