/*
1. Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234  4321
123    321
12      21
1        1

Concepts to be used.
- Loops
*/

#include<stdio.h>

void print1(int a ){
    for(int i=1 ; i<=a ; i++){
        printf("%d",i);
    }
    
}
void print2(int a ){
    for(int i=0 ; i<(a*2) ; i++){
        printf("%c",' ');
    }
        
}
void print3(int a){
    for(int i=a ; i>0 ; i--){
        printf("%d",i);
    }
    printf("\n");
}

int main(){

    int a=5,b=5,c=0;
    for(int i=0 ; i<5 ; i++){
        print1(5-i);
        print2(i);
        print3(5-i);
    } 
    return 0;
}