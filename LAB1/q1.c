//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a, b;
    printf("Enter a, b : ");
    scanf("%d%d", &a, &b);

    printf("\nBefore Swapping : ");
    printf("(a, b) -> (%d, %d)\n\n", a, b);

    swap(&a, &b);
    printf("After Swapping : ");
    printf("(a, b) -> (%d, %d)\n", a, b);

    return 0;
}
