
#include <stdio.h>

void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers: a = %d, b = %d\n", a, b);
}

void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping with pointers: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swapWithoutPointers(a, b);
    swapWithPointers(&a, &b);

    return 0;
}
