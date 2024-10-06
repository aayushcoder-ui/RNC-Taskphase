#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    int sum = 0;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
