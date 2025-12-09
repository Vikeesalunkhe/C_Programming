//Write a Program to check given no is prime or not.
//Input : 7
//Output : Prime Number

#include <stdio.h>

int isPrime(int num) {
    int count = 0;
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 1; i<= num; i++) {
        if (num % i == 0) {
            printf("factor: %d\n", i);
            count++;
            
        }
    }
    if (count >= 2) {
        return 1; 
    } else {
        return 0;
    }
}

void main() {
    int num;
    printf("Enter User Number : ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a Prime Number\n", num);
    } else {
        printf("%d is Not a Prime Number\n", num);
    }
}