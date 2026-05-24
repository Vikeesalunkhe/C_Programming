#include <stdio.h>

int main(){

    int arr[] = {1,6,2,5,8, 45, 2, 4, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< len; i++){

        for (int j = 0; j<len-1; j++){

            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("sorted array is : ");
    for (int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}