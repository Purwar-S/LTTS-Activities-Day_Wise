/*
Difference between EVEN and ODD Indexed Elements
*/

#include<stdio.h>

int main(){

    int n , arr[100] , i , es=0 , os=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        //even
        if(i%2==0){
            es = es + arr[i];
        }
        //odd
        else if(i%2!=0){
            os = os + arr[i];
        }
    }
    int diff = 0;
    if(es>os){
        diff = diff+(es - os);
    }
    else{
        diff = os - es;
    }
    printf("The difference between the even and odd indexed elements is : %d\n",diff);
    return 0;
}