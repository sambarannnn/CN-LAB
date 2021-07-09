//SAMBARAN SENGUPTA - 1929039
#include<stdio.h>
struct student {
    int sub1;
    int sub2;
    int sub3;
    int total;
    char name[50];
};

int main()
{
    struct student s[10];
    int max = 0;
    struct student *topper;
    for(int i = 0; i < 3; i++) {
        printf("\nFOR STUDENT %d\n", i+1);
        printf("\nEnter Name : ");
        scanf("%s", s[i].name);
        printf("\nEnter Marks in Three Subjects = ");
        scanf("%d%d%d",& s[i].sub1,&s[i].sub2,&s[i].sub3);
        s[i].total = s[i].sub1+s[i].sub2+s[i].sub3;
        if(max < s[i].total) {
            max = s[i].total;
            topper = &s[i];
        }
    }
    printf("Student with maximum marks : %s.\n", topper->name);
    return 0;
}
