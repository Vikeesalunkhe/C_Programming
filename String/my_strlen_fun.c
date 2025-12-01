#include <stdio.h>
#include <string.h>

int mystrlen(char list[]) {

    int index = 0;
    int count = 0;

    while (list[index] != '\0') {

        count++;
        index++;
    }

    return count;


}

void main() {

    char name[] = {'V', 'i', 'k', 'e', 'e'};

    int lenght = mystrlen(name);
    printf("lenght is : %d\n", lenght);     //5
    printf("lenght using bydefault fun : %ld\n", strlen(name));          //5
}