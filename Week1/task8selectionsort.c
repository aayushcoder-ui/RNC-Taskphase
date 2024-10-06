#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n-1; i++) {
        minIndex = i;

        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("Minimum element: %d\n", arr[0]);        
    printf("Maximum element: %d\n", arr[n-1]);  

    return 0;
}
