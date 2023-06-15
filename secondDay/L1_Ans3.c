/*
3. Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/

// Can also be done using VECTORS to save resources by dynamically allocating it.

#include<stdio.h>

int main(){

    int arr[10] , size;
    printf("Enter the size of the element array\n");
    scanf("%d",&size);
    printf("Enter the elements now :\n");
    for(int i=0 ;i<size ;i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(int i=0 ;i<size ;i++){
        if(i%2==0){
            sum = sum + arr[i];
        }
    }
    printf("The sum of alternate element is : %d",sum);
    return 0;
}