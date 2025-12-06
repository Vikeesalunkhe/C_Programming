/*
C C C
B B B
A A A
*/
#include <stdio.h>

void print_pattern(int row) {

    int letter = 65+row-1;
    for (int i = 0; i<row; i++) {
        
        for (int j = 0; j<row; j++) {

            printf("%c ", letter);
        }
        printf("\n");
        letter--;
    }
}

void main() {
    int row;
    printf("Enter Rows : ");
    scanf("%d", &row);
    print_pattern(row);
}

