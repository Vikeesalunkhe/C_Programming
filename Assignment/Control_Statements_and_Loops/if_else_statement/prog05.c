// check char is CAPITAL or SMALL

#include <stdio.h>

void main() {

    char chr;
    printf("Enter Char : ");
    scanf("%c", &chr);

    if (chr >= 'A' && chr<= 'Z') {

        printf("Entered char %c is UPPARCASE\n", chr);
    } else if (chr >='a' && chr <='z') {

        printf("Entered char %c is LOWERCASE\n", chr);
    } else {

        printf("Entered %c is SYMBOL\n", chr);
        

    }


}