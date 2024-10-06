#include <stdio.h>

int main() {
    int n, target_sum, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the desired sum: ");
    scanf("%d", &target_sum);

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target_sum) {
                    printf("Triplet with sum %d: (%d, %d, %d)\n", target_sum, arr[i], arr[j], arr[k]);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("No triplets found with sum %d.\n", target_sum);
    }

    return 0;
}
