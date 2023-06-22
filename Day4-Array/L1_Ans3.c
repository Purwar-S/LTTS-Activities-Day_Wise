/*
Reverse the Array
*/

#include<stdio.h>
#define MAX 100

int main(){

    int n , arr[MAX] , i ;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversing the array...................\n\n");
    for(int i=0 , j=n-1 ; i<=j ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("The reversed array is as :\n\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}