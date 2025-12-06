/*
A B C
a b c
A B C
*/
#include <stdio.h>

void print_pattern(int row) {

    
    for (int i = 0; i<row; i++) {

        int upper_letter = 65;
        int lower_letter = 97;
        for (int j = 0; j<row; j++) {

            if (i%2 == 0) {
                printf("%c ", upper_letter);
                upper_letter++;
            }
            else {
                printf("%c ", lower_letter);
                lower_letter++;
            }
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

