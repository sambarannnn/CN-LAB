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

void swap(int*a, int *b, int a_size, int b_size){

    int size = 0;
    if(a_size < b_size)
        size = a_size;
    else
        size = b_size;

    for(int i = 0; i < size; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int n, m;
    printf("Enter size of Array 1 : ");
    scanf("%d", &n);
    int arr1[n];
    input(arr1, n);

    printf("Enter size of Array 2 : ");
    scanf("%d", &m);
    int arr2[m];
    input(arr2, m);

    swap(arr1, arr2, n, m);

    printf("\n\nAfter swapping : \n" );
    printf("\nArray 1 : \n" );
    printArray(arr1, n);
    printf("\nArray 2 : \n" );
    printArray(arr2, m);

    return 0;
}
