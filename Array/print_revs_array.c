#include <stdio.h>

void main() {

    int size;
    printf("Enter Array size : ");
    scanf("%d", &size);

    int arr01[size];

    for (int i =0; i<size; i++) {

        printf("Enter Array Element : ");
        scanf("%d", &(arr01[i]));
    }

    printf("Revers Array\n");

    for (int i = size; size>0; size-- ) {

        printf("%d\n", arr01[size-1]);
    }

    
}