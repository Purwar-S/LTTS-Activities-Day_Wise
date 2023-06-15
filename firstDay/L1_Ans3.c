/*
3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
*/

#include<stdio.h>

int main(){

    int rno,ph,mt,ch,total;
    char first_Name[20] , last_Name[20];
    float percent;
    printf("Enter the roll number of student\n");
    scanf("%d",&rno);
    printf("Enter the first name of student\n");
    scanf("%s",first_Name);
    printf("Enter the last name of student\n");
    scanf("%s",last_Name);
    printf("Enter the marks of student in PHYSICS\n");
    scanf("%d",&ph);
    printf("Enter the marks of student in MATHS\n");
    scanf("%d",&mt);
    printf("Enter the marks of student in CHEMISTRY\n");
    scanf("%d",&ch);
    total = ph+ch+mt;
    printf("Student Name : %s %s\n",first_Name,last_Name);
    printf("Student Roll No : %d\n",rno);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Maths : %d\n",ph,ch,mt);
    printf("Total Marks : %d/300\n",total);
    percent = (float)(total/3);
    printf("The Percentage is : %0.2f \n",percent);
    return 0; 
     
}