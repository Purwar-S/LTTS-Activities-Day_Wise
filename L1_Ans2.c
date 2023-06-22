/*
Write a function to initialize all members in the above array of structures
*/

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student s;

void initializeStudents(s* students, int size) {
    printf("Enter the student details\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&students[i].rollno);
        char c[20];
        scanf("%s",c);
        strcpy(students[i].name, c);
        scanf("%f",&students[i].marks );
    }
    printf("Exiting function......");
}

int main() {

    int size;
    printf("Enter the number of students: ");
    scanf("%d",&size);
    s students[size];
    initializeStudents(students, size);
    printf("Data for all students:\n");
    for (int i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
