/*
2. Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators
*/

#include<stdio.h>

int main(){

    int num;
    printf("Enter the 32 bit number\n");
    scanf("%d",&num);
    printf("The bits of the number= %d is :\n",num);
    for(int i=10 ; i>=0 ; --i){
        printf("%u  " , ((num>>i)&1));
    }
    return 0;
}