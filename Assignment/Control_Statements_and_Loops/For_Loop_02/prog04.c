//Write a Program to claculate sum of range between two numbers.

#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Calculate the sum using a for loop
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    // Output the result
    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}