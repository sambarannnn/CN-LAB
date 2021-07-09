//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>
struct book
{
    int id;
    char title[30];
    char name[30];
    float price;
};
void printAll(struct book s1[], int n)
{
    for (int i = 0; i < n; i++)
        printf("\n\nID = %d\nTITLE = %s\nNAME = %s\nPrice = %f\n", s1[i].id, s1[i].title, s1[i].name, s1[i].price);
}
int main()
{
    int n;
    struct book s[100];
    printf("Enter number of books : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nFor Book No. %d\n", i+1);
        printf("Id : ");
        scanf("%d", &s[i].id);

        printf("Book Title : ");
        scanf("%s", s[i].title);

        printf("Author's Name : ");
        scanf("%s", s[i].name);

        printf("Price : ");
        scanf("%f", &s[i].price);
    }
    printAll(s, n);
    printf("\n");
}
