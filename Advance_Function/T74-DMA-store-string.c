#include <stdio.h>
#include <stdlib.h>

int main(){

    char *ptr = (char*)malloc(15*sizeof(char));

    if (ptr == NULL){
        printf("Memory not allowed\n");
    }

    printf("Enter string : ");
    scanf("%[^\n]", ptr);

    printf("%s\n", ptr);
    free(ptr);
}

