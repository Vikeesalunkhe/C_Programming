//Write a Program to Create Character Array, print vowels of Array with index No.

#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    char arr[size];

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%c", &(arr[i]));
        getchar();
    }

    printf("Array Created Sucseccfully\n");

    getchar();

    for (int i = 0; i<size; i++) {

        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O'|| arr[i] == 'U' || 
            arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ) {

            printf("%c %d", arr[i], i);
        }
    }
}