#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    int num, originalNum, digit1, digit2, digit3;
    int sumOfCubes;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Extract digits for a 3-digit number
    digit3 = originalNum % 10;          // Last digit
    originalNum /= 10;
    digit2 = originalNum % 10;          // Middle digit
    originalNum /= 10;
    digit1 = originalNum % 10;          // First digit

    // Calculate the sum of the cubes of the digits
    sumOfCubes = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);

    // Check if it's an Armstrong number using if-else
    if (sumOfCubes == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}