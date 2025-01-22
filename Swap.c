#include <stdio.h>

int Swap() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the numbers
    temp = a;
    a = b;
    b = temp;

    // Display numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
