/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include <stdio.h>

void print_pattern(int row) {

    for (int i = 0; i<row; i++) {

        int count = 1;

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

