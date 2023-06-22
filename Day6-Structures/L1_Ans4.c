/*
 Write a program to Store Data for n students in Structures Dynamically. 
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};
typedef struct Student s;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    s* students = (s*)malloc(n * sizeof(s));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);   
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &(students[i].age));
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }
    printf("\nData for all students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    free(students);
    return 0;
    
}
