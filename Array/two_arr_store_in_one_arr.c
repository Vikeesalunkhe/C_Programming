#include <stdio.h>

void main() {

    int arr01_Size, arr02_Size;
    printf("Enter Size of Array 01 : ");
    scanf("%d", &arr01_Size);

    int arr01[arr01_Size];

    for (int i = 0; i<arr01_Size; i++) {

        printf("Enter Element for Array 01 : ");
        scanf("%d", &(arr01[i]));
    }

    printf("Enter Size of Array 02 : ");
    scanf("%d", &arr02_Size);

    int arr02[arr02_Size];

        for (int i = 0; i<arr02_Size; i++) {

        printf("Enter Element for Array 01 : ");
        scanf("%d", &(arr02[i]));
    }

    int sum = arr01_Size + arr02_Size;

    int commonArr[sum];

    for (int i = 0; i<arr01_Size; i++) {

        commonArr[i] = arr01[i];
    }

    for (int i = 0; i<arr02_Size; i++) {

        commonArr[arr01_Size + i] = arr02[i];
    }

    printf("Combine Array is : ");

    for (int i = 0; i<sum; i++) {

        printf(" %d |", commonArr[i]);
    }


}