#include <stdio.h>

// Function to calculate the average of an array
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to calculate the average
    float avg = calculateAverage(arr, n);

    // Print the average
    printf("Average of array elements: %.2f\n", avg);

    return 0;
}
