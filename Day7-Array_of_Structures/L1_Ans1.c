/*
Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student s;

void parseStringAndInitialize(s* students, int size, char* input) {
    char* token;
    int i = 0;
    token = strtok(input, " ");
    while (token != NULL) {
        if (i % 3 == 0) {
            students[i / 3].rollno = atoi(token);
        } else if (i % 3 == 1) {
            strcpy(students[i / 3].name, token);
        } else if (i % 3 == 2) {
            students[i / 3].marks = atof(token);
        }
        token = strtok(NULL, " ");
        i++;
    }
}

int main() {

    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    s* students = (s*)malloc(size * sizeof(s));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }
    getchar(); 
    printf("Enter the student details (rollno name marks):\n");
    for (int i = 0; i < size; i++) {
        char input[50];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        parseStringAndInitialize(&students[i], size, input);
    }
    printf("\nData for all students:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    free(students);

    return 0;
}
