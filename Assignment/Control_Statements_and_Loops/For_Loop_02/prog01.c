//Write a Program to print even number of given range.

#include <stdio.h>

void printeven_no(int start, int end) {

    for (start; start<=end; start++ ) {

        if (start % 2 == 0) {
            printf("Even no between range : %d\n", start);
        }
    }

    
}

void main() {

    int start, end;
    printf("Enter Start Number : ");
    scanf("%d", &start);
    printf("Enter End Number : ");
    scanf("%d", &end);

    printeven_no(start, end);
}

