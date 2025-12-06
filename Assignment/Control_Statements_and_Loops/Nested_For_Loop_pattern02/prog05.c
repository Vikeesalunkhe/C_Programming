/*
1 2 3
3 2 1
1 2 3
*/
#include <stdio.h>

void print_pattern(int row) {

    int num = 1;
    for (int i = 0; i<row; i++) {
        
        for (int j = 0; j<row; j++) {

            if (i%2 == 0)
                printf("%d ", j+1);
            else{
                printf("%d ", row - j);
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

