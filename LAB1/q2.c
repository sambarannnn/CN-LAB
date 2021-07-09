//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>
#include <stdlib.h>
void input(int *arr, int n) {
    printf("Enter elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
}

void printArray(int *arr, int n) {
    printf("Array elements : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    input(arr, n);
    printArray(arr, n);

    return 0;
}
