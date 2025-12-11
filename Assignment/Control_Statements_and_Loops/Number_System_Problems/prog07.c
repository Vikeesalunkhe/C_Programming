/*
Writre a Program to Check user given Number is Palindrome or not.
Input : 1221
Output : 1221 is palindrome 
*/
#include <stdio.h>

int isPalindrome(int num) {

    int palindrome = 0;
    int temp = num;
    int lastDigit;
    while (num != 0) {

        lastDigit = num%10;
        palindrome = palindrome * 10 + lastDigit;
        num = num/10;
    }

    printf("Reverse is  : %d\n", palindrome);

    if (temp == palindrome) {
        return 1;
    } else {
        return 0;
    }

}

void main() {

    int num;
    printf("Enter User Number : ");
    scanf("%d", &num);
    if (isPalindrome(num)) {

        printf("%d is Palindrome Number.\n", num);
    } else {

        printf("%d is Not palindrome Number.\n", num);
    }


}