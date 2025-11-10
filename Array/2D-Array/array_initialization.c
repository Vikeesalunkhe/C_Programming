// 2D array initilization

#include <stdio.h>

void main() {

    int arr01[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr02[][3] = {1,2,3,4,5,6,7,8,9};
    int arr03[][3] = {{1,2,3}, {4,5}, {7}};

    for (int row = 0; row<3; row++) {

        for (int col = 0; col<3; col++) {

            printf("%d ", arr01[row][col]);
        }
        printf("\n");
    }
}