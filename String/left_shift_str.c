#include <stdio.h>
#include <string.h>


int main() {

    char str[] = "Hello";

    int len = strlen(str);

    while (1) {

    char temp = str[0];
    for (int i = 0; i<len; i++){
        str[i] = str[i+1];
    }

    str[len-1] = temp;
    printf("%s\n", str);
    }

}