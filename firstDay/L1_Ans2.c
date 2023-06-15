/*
2. Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"
*/

#include<stdio.h>

int main(){

    int num;
    printf("Enter the numbers obtined by the student\n");
    scanf("%d",&num);
    printf("The grades obtained by the student is : ");
    if(num >=90 && num <=100)
        printf("Grade A");
    else if(num >=75 && num <=89)
        printf("Grade B");
    else if(num >=60 && num <=74)
        printf("Grade C");
    else if(num >=50 && num <=59)
        printf("Grade D");
    else 
        printf("Grade F");
    return 0;
}