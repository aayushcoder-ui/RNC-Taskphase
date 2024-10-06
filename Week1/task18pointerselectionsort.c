#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *i, *j, *min;

    printf("Enter the elements: ");
    for (i = arr; i < arr + n; i++) {
        scanf("%d", i);
    }

    for (i = arr; i < arr + n - 1; i++) {
        min = i;
        for (j = i + 1; j < arr + n; j++) {
            if (*j < *min) {
                min = j;
            }
        }
        int temp = *i;
        *i = *min;
        *min = temp;
    }

    printf("Sorted array: ");
    for (i = arr; i < arr + n; i++) {
        printf("%d ", *i);
    }
    printf("\n");

    return 0;
}
