/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include <stdio.h>

void print_pattern(int row) {

    int count = 1;

    for (int i = 0; i<row; i++) {

        for (int j = 0; j<row; j++) {

            printf("%d  ", count);
            
        }
        printf("\n");
        count++;
    }
}

void main() {
    int row;
    printf("Enter Rows : ");
    scanf("%d", &row);
    print_pattern(row);
}

