/*
TOGGLE CASE
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char arr[50] ;
    printf("Enter the string to Toggle\n");
    gets(arr);
    printf("Printing the original char array : %s\n",arr);
    int i=0;
    while(arr[i] != '\0'){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 32;
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] + 32;
        }
        i++;
    }
    printf("Printing the toggled char array : %s\n",arr);
    printf("\n");
    
    return 0;
}