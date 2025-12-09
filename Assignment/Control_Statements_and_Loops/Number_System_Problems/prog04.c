//Write a program to check given number is composit or not.

//Input : 9
//Output : Composite Number
#include <stdio.h>

int isComposite(int num) {
    int count = 0;
    if (num <= 1) {
        return 0; // Not composite
    }
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if (count > 2) {
        return 1; // Composite
    } else {
        return 0; // Not composite
    }
}

void main() {
    int num;
    printf("Enter User Number : ");
    scanf("%d", &num);

    if (isComposite(num)) {
        printf("%d is a Composite Number\n", num);
    } else {
        printf("%d is Not a Composite Number\n", num);
    }
}