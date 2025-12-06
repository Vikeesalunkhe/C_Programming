/*
A B C D
E F G H
I J K L
M N O P
*/
#include <stdio.h>

void print_pattern(int row) {

    int letter = 65;
    for (int i = 0; i<row; i++) {
        
        for (int j = 0; j<row; j++) {

            printf("%c ", letter);
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

