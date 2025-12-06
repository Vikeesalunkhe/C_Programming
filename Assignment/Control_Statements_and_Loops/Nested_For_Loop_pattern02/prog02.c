/*
3 2 1
3 2 1
3 2 1
*/
#include <stdio.h>

void print_pattern(int row) {
    
    for (int i = 0; i<row; i++) {
        
        int num = row; 
        for (int j = 0; j<row; j++) {

            printf("%d ", num);
            num--;
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

