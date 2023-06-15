/*
2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting
*/

#include<stdio.h>

void common_Change(void* a , void* b , size_t size){
    char temp[size];
    memcpy(temp , a , size);
    memcpy(a , b , size);
    memcpy(b , temp , size);
}

int main(){

    //swappig integers values using common function
    int a,b;
    printf("Enter the integer elements\n");
    scanf("%d %d",&a,&b);
    printf("Before Swapping :\na=%d\nb=%d\n",a,b);
    common_Change(&a,&b,sizeof(int));
    printf("After Swapping :\na=%d\nb=%d\n",a,b);

    //swapping strings(Char Array) using same common function
    char as[20] = "HELLO";
    char bs[20] = "LTTIs";
    printf("Before Swapping :\na=%s\nb=%s\n",as,bs);
    common_Change(&as,&bs,sizeof(char[6]));
    printf("After Swapping :\na=%s\nb=%s\n",as,bs);
    
    return 0;
}