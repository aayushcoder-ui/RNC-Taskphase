#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        printf("The given sides form a right-angled triangle.\n");
    } else {
        printf("The given sides do not form a right-angled triangle.\n");
    }

    return 0;
}