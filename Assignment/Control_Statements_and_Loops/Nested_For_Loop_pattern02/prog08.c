/*
A1 A2 A3
A1 A2 A3
A1 A2 A3
*/
#include <stdio.h>

void print_pattern(int row) {

    int letter = 65;
    for (int i = 0; i<row; i++) {
        
        for (int j = 0; j<row; j++) {

            printf("%c%d ", letter, j+1);
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

