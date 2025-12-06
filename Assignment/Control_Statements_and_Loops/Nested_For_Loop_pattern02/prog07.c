/*
* # *
* # *
* # *
*/
#include <stdio.h>

void print_pattern(int row) {

    for (int i = 0; i<row; i++) {
        
        for (int j = 0; j<row; j++) {

            if (j%2 == 0)
                printf("* ");
            else{
                printf("# ");
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

