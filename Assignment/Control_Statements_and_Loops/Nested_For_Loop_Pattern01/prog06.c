/*
A B C D
A B C D
A B C D
A B C D
*/

#include <stdio.h>

void print_pattern(int row) {

    for (int i = 0; i<row; i++) {

        int letter = 65;
        for (int j = 0; j<row; j++) {

            printf("%c  ", letter);
            letter++;
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

