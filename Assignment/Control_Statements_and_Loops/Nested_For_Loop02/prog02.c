/*
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

*/

#include <stdio.h>

void print_pattern(int row) {

    int count = 1;

    for (int i = 0; i<row; i++) {

        for (int j = 0; j<row; j++) {

            printf("%d  ", count);
            count++;
        }
        printf("\n");
    }
}

void main() {
    int row;
    printf("Enter Rows : ");
    scanf("%d", &row);
    print_pattern(row);
}

