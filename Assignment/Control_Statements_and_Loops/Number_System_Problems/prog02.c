// Write a program to print factorial of a given number.
// Input : 5
// Output : 120

#include <stdio.h>

int fun(int num) {
    int factorial = 1;

    for (int i = 1; i<=num; i++) {
        factorial *= i;
        
    }
    return factorial;
}

void main(){

    int num;
    printf("Enter user Number : ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n",num,fun(num));
}

