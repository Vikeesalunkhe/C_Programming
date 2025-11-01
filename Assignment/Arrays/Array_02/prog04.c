//Write a Program to create an interger N numbers of Array in array user store id's student, user search the student id in that created Array and print index no of serach array.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Student Count : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    int arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter student Id's for  %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    int searchId;
    printf("Enter search Student id : ");
    scanf("%d", &searchId);

    printf("Array Created Sucseccfully \n");

    for (int i = size-1; i>=0; i--) {

        if (arr[i] == searchId) {

            printf("Id %d found at index %d\n", searchId, i);
            break;
        }
    }

}