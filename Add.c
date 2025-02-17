#include <stdio.h>
#include "HeaderFile.h"
int Add() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    //ToDO: correct the return value
    return 0;
}
