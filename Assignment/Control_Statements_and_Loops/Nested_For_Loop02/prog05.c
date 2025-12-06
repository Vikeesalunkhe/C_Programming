/*
1A 1A 1A 1A
1A 1A 1A 1A
1A 1A 1A 1A
1A 1A 1A 1A

*/

#include <stdio.h>

void print_pattern(int row) {

    int count = 1;
    for (int i = 0; i<row; i++) {

        for (int j = 0; j<row; j++) {

            printf("%d%c  ", count,65);
            
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

