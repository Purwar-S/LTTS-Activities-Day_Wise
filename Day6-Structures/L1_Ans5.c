/*
Write a program to demonstrate the swapping the fields of two structures using pointers.
*/

#include <stdio.h>

struct Person {
    char name[50];
    int age;
};
typedef struct Person p;

void swapFields(p* p1, p* p2) {
    
    char tempName[50];
    strcpy(tempName, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempName);
    int tempAge = p1->age;
    p1->age = p2->age;
    p2->age = tempAge;
}

int main() {

    p person1 = {"John", 25};
    p person2 = {"Alice", 30};
    printf("Before swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);
    swapFields(&person1, &person2);
    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    return 0;
}
