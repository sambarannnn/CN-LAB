//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
    char branch[50];
};

void addStudent(struct student *s, int student_number) {
    printf("\nEnter Name : ");
    scanf("%s", (s + student_number)->name);
    printf("Enter Branch : ");
    scanf("%s", (s + student_number)->branch);
}
void printAll(struct student *s, int size)
{
    for (int i = 0; i < size; i++)
        printf("\n\nNAME = %s\nBranch = %s\n", (s+i)->name, (s+i)->branch);
}

int main() {
    printf("Enter number of students : ");
    int size;
    scanf("%d", &size);

    struct student *s = malloc(size * sizeof(struct student));

    printf("\nEnter Student Information\n");
    for(int i = 0; i < size; i++) {
        addStudent(s, i);
    }
    //can use realloc to add further students
    //to add one more student
    //s = realloc(s, (size + 1) * sizeof(struct student));
    //addStudent(s, size);
    //size++;

    printAll(s, size);
}
