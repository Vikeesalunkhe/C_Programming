/*
D C B A
D C B A
D C B A
D C B A
*/

#include <stdio.h>

void print_pattern(int row) {

    
    for (int i = 0; i<row; i++) {

        int letter = 65+row-1;
        for (int j = 0; j<row; j++) {

            printf("%c  ", letter);
            letter--;
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

