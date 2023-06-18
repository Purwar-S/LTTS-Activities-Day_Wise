/*
4. Find the largest number by deleting single digit in a 4 digit number 5872 -> 872 , 9856 -> 986.

Concepts to be used.
- Loops
- Operators
*/

#include<stdio.h>

// sorting array o find min and max elements
void sort_arr(int arr[4]){
    int min_pos , min_ele = 10;
    for(int i=0 ; i<4 ; i++){
        min_ele = 10;
        for(int j=i ; j<4 ; j++){
            if(arr[j]<min_ele){
                min_ele = arr[j];
                min_pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_pos];
        arr[min_pos] = temp;
    }
}

// re-converting the digit array into a new number
int arrToNum(int arr[4]){
    int num = 0 , mul = 1 ; 
    for(int i=1 ; i<4 ; i++){
        num = num + (arr[i] * mul);
        mul =mul * 10;
    }
    return num;
}

void arrPrint(int arr[4]){
    // function to print any array
    for(int i=0 ;i<4 ;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){

    int arr[4],num , new_no , c=0;
    printf("\nEnter the 4 digit number\n");
    scanf("%d",&num);

    // converting number int a array of digits
    for(int i=0 ; i<4 ; i++){
        int digit = num%10;
        arr[c] = digit;
        c++;
        num = num/10;
        //printf("The number in array is : %d \t",arr[c-1]);
    } 
    sort_arr(arr);    // calling
    //printf("\nAfter Sorting the array is:\n");
    //arrPrint(arr);
    //printf("\nThe minimum element removed is : %d\n",arr[0]);
    new_no = arrToNum(arr);
    printf("\nThe new 3 digit largest number is : %d\n",new_no);
    return 0;
}