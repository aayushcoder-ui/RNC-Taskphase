#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;


    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  
    }


    int *middle = ptr + (n / 2);

    printf("Middle element: %d\n", *middle);

    return 0;
}
