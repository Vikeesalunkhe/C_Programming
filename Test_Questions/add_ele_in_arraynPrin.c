#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of element in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in array : \n");
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array elements are : ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}