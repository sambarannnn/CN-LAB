//SAMBARAN SENGUPTA - 1929039
#include<stdio.h>
struct employee {
    char name[50];
    float basicpay;
    float DA;
    float grosspay;
}e[100];

int main() {
    int n;
    printf("Enter number of employees : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nEnter name : ");
        scanf("%s", e[i].name);
        printf("Enter Basic pay :");
        scanf("%f", &e[i].basicpay);
    }
    for(int i = 0; i < n; i++) {
        e[i].DA= 52.0 / 100 * e[i].basicpay;
        e[i].grosspay = e[i].DA + e[i].basicpay;
        printf("\n\nEmployee Name = %s \nGross Pay = %f", e[i].name, e[i].grosspay);
    }
    printf("\n");
}
