#include <stdio.h>

int main(){

    int row, col;
    printf("Enter row col : ");
    scanf("%d%d", &row, &col);

    printf("Enter array values : ");
    int arr[row][col];
    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i<row; i++){

        for (int j = 0; j<col; j++){
            sum += arr[i][j];
        }
    }


    printf("sum : %d\n", sum);
}

