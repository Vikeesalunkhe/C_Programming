#include <stdio.h>
#include <string.h>

char my_str_copy(char src[], char name2[]) {

    int index = 0;
    while (src[index] != '\0') {

        name2[index] = src[index];
        index++;
    }
    name2[index] = '\0';

}

void main() {

    char name1[] = {'V', 'i', 'k', 'e', 'e', '\0'};
    char name2[10];
    my_str_copy(name1, name2);

    printf("Name1 : %s\n", name1);
    printf("Name2 : %s\n", name2);
}