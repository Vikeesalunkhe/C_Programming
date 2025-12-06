/*
a1 b1 c1 d1
a1 b1 c1 d1
a1 b1 c1 d1 
a1 b1 c1 d1
*/

#include <stdio.h>

void print_pattern(int row) {

    
    for (int i = 0; i<row; i++) {

        int letter = 97, constant = 1;
        
        for (int j = 0; j<row; j++) {

            printf("%c%d  ", letter, constant);
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

