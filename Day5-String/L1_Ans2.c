/*
Convert String as Integer
eg = "1234" = 1234

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    char num[5];
    printf("Enter any 4 digit number\n");
    scanf("%s",num);
    printf("The number in the string format is : %s\n",num);
    int x = atoi(num); 
    printf("\nThe integer formatted number is: %d\n",x);
    
    return 0;
}