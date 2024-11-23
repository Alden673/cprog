#include <stdio.h> 
// Function to swap two numbers without using pointers 
void swapWithoutPointers(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
 
// Function to swap two numbers using pointers 
void swapWithPointers(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
 
int main() { 
    int num1, num2; 
 
    printf("Enter two numbers: "); 
    scanf("%d %d", &num1, &num2); 
 
    printf("Before swapping without pointers: num1 = %d, num2 = %d\n", num1, num2); 
    swapWithoutPointers(&num1, &num2); 
    printf("After swapping without pointers: num1 = %d, num2 = %d\n", num1, num2); 
 
    printf("Before swapping with pointers: num1 = %d, num2 = %d\n", num1, num2); 
    swapWithPointers(&num1, &num2); 
    printf("After swapping with pointers: num1 = %d, num2 = %d\n", num1, num2); 
 
    return 0; 
}