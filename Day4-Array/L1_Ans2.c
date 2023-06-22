/*
MIN and MAX of 1-D array
*/

#include<stdio.h>
#define MAX 100

int main(){

    int n , arr[MAX] , i , max=-1 , min=22222;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The Maximum element in the array is : %d\n",max);
    printf("The Minimum element in the array is : %d\n",min);
    return 0;
}