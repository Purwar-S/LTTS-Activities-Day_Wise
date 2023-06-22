/*
SUM AND AVERAGE OF 1-D ARRAY
*/

#include<stdio.h>
#define MAX 100

int main(){

    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int array[MAX] , sum=0 , avg ;
    printf("Enter the array elements\n");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
        sum = sum +array[i];
    }
    printf("The SUM of the array elements is : %d\n",sum);
    avg = sum / n;
    printf("The average of the array elements is : %d\n",avg);
    return 0;
}