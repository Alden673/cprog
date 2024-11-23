
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    float arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        if (arr[i] > 0) {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n / 2; i++) {
        float temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    float smallest = arr[0], largest = arr[0];
    int smallestPos = 0, largestPos = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestPos = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            largestPos = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 5) {
            arr[i] = 10;
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\nSmallest value: %.2f at position %d\n", smallest, smallestPos);
    printf("Largest value: %.2f at position %d\n", largest, largestPos);

    return 0;
}
