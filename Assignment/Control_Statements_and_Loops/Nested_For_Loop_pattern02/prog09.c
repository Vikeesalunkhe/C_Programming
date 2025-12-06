/*
1 B 3
1 B 3
1 B 3
*/
#include <stdio.h>

void print_pattern(int row) {

    
    for (int i = 0; i<row; i++) {

        int letter = 65, num = 1;
        for (int j = 0; j<row; j++) {

            if (j%2 == 0)
                printf("%d ", num);
            else{
                printf("%c ", letter);
            }
            letter++;
            num +=1;
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

