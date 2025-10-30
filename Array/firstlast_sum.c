#include <stdio.h>

void main() {

    int size;
    printf("Enter size of Array : ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i<size; i++) {

        printf("Enter Array element : ");
        scanf("%d", &(arr[i]));
    }

    printf("Array Element is : \n");

    for (int i = 0; i<size;i++) {

        printf("%d\n", arr[i]);
    }

    for (int i = 0; i<(size/2); i++) {

        int last = size - (i+1);

        printf("sum is : %d\n", (arr[i] + arr[last]));
    }
}