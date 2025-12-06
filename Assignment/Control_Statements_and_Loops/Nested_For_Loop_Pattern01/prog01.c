/*
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/

#include <stdio.h>

void print_pattern(int row) {

    for (int i = 0; i<row; i++) {

        for (int j = 0; j<row; j++) {

            printf("1 ");
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

