//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>

void input(int *arr, int n) {
    printf("Enter elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
}
void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void printArray(int *arr, int n) {
    printf("Array elements : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

void reverse(int array[], int n)
{
    // pointer1 pointing at the beginning of the array
    int *pointer1 = array;
    // pointer2 pointing at end of the array
    int *pointer2 = array + n - 1;
    while (pointer1 < pointer2) {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    int arr[n];
    input(arr, n);
    reverse(arr, n);
    printf("\nAfter reversing : \n");
    printArray(arr, n);

    return 0;
}
