/*
5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 
1 and 6, 0 and 5
*/

#include<stdio.h>

int main(){

    int arr[10] , t , num;
    printf("\nEnter the number of test cases\n");
    scanf("%d",&t);
    for(int i=0 ; i<t ; i++){
        int c = 0 , mini = 10 , maxi = -10;
        printf("\nEnter the number\n");
        scanf("%d",&num);
        if(num < 10  && num > (-10)){
            printf("\nNot Valid\n");
        }
        else{
            while(num != 0){
                int digit = num % 10;
                num = num / 10;
                if(digit < mini){
                    mini = digit;
                }
                if(digit > maxi){
                    maxi = digit;
                }
            }
            printf("\nThe smallest digit in the number is : %d\n",mini);
            printf("\nThe largest digit in the number is : %d\n",maxi);
        }
        printf("\n\n...............................................");
    }
    return 0;
}