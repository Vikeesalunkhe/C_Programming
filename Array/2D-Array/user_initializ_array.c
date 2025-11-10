#include <stdio.h>

void main() {

    int row;
    int col;
    
    printf("Enter size of array row : ");
    scanf("%d", &row);
    printf("Enter size of column : ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter Array elemnt is : \n");
    for (int i = 0; i<row; i++) {

        for (int j = 0; j<col; j++) {

            scanf("%d", &(arr[i][j]));
        }
    }

    printf("user Array Elemnt is : \n");

    for (int i = 0; i<row; i++) {

        for (int j = 0; j<col; j++) {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
}