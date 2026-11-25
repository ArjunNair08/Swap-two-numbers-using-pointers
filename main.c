#include <stdio.h>

// Function to swap two numbers using pointers (Call by Reference)
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nBefore Swapping:\n");
    printf("First number = %d, Second number = %d\n", num1, num2);

    // Passing addresses of num1 and num2
    swap(&num1, &num2);

    // Display values after swapping
    printf("\nAfter Swapping:\n");
    printf("First number = %d, Second number = %d\n", num1, num2);

    return 0;
}
