
#include <stdio.h>

int main() {
    int inputArray[20], uniqueArr[20];
    int i, j, k, elementCount, count = 0;
    printf("Enter Number of Elements in Array: ");
    scanf("%d", &elementCount);
    printf("\nEnter %d numbers: ", elementCount);
    for (i = 0; i < elementCount; i++)
        scanf("%d", &inputArray[i]);

    for (i = 0; i < elementCount; i++) {
        for (j = i + 1; j < elementCount; j++) {
            if (inputArray[i] == inputArray[j]) {
                count++;
                for (k = j; k < elementCount - 1; k++)
                    inputArray[k] = inputArray[k + 1];
                elementCount--;
                j--;
            }
        }
    }
    printf("\n Number of duplicate elements in the array is : %d", count);
    printf(" \n Array elements after deletion of the duplicate elements: ");
    for (i = 0; i < elementCount; i++) {
        printf("%d\t", inputArray[i]);
    }
    return 0;
}
