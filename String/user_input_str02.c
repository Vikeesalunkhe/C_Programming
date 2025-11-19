#include <stdio.h>

void main() {

    char name[20];
    int index = 0;
    char ch;

    ch = fgets();

    while (ch != '\n') {

        name[index] = ch;
        index++;
    }

    name[index] = '\0';

    printf("Name is : %s\n", name);
}