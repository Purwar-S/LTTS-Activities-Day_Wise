/*
 Write a function to sort the array of structures in descending order based on marks 
*/

#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStudentsByMarks(struct Student* students, int size) {
    
    struct Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the two structures
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {

    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student students[size];
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    sortStudentsByMarks(students, size);
    printf("\nData for all students (sorted by marks in descending order):\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
