//check number is composite or not

#include <stdio.h>

void main() {

    int number, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 1; i <= number; ++i) {
        // condition for non-prime number
        if (number % i == 0) {
            flag += 1;
            
        }
    }

    if (flag > 2)
        printf("%d is a composite number.\n", number);
    else
        printf("%d is not a composite number.\n", number);
}