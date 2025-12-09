//Write a prpgram to print the factores of a given number.  
//Input : 9
//Output : 1,3,9

#include <stdio.h>

void factors(int num){

    printf("Factors is : ");
    for (int i = 1; i<=num; i++) {

        if (num%i == 0) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

void main() {

    int num;
    printf("Enter User Number : ");
    scanf("%d", &num);

    factors(num);
}