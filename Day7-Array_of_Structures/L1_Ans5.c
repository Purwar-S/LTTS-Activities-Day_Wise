/*
Write a function to perform a search operation on the array of structures based on name of the student
*/

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(struct Student* students, int size, const char* name) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
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
    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    searchStudentByName(students, size, searchName);

    return 0;
}
