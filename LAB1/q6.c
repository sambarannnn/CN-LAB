//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>

void input(int *arr, int n) {
    printf("Enter elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
}

int search(int *arr, int key, int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    int arr[n];
    input(arr, n);

    printf("Enter key to be searched : ");
    int key;
    scanf("%d", &key);
    int index = search(arr, key, n);
    if(index == -1)
        printf("\nKey is absent in array.\n");
    else
        printf("\nKey is found at index %d.\n", index);
    return 0;
}
