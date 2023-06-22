/*
Write a function to display all members in the above array of structures
*/

#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student *students, int size) {
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

void displayStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {

    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student students[size];
    initializeStudents(students, size);
    displayStudents(students, size);

    return 0;
}
