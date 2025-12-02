// Write a program to print the size of int, char, float, double and void data types.

#include <stdio.h>

void main() {

    printf("Size of int : %ld butes\n", sizeof(int));         //4
    printf("Size of char : %ld bytes\n", sizeof(char));       //1
    printf("Size of float : %ld bytes\n", sizeof(float));     //4
    printf("Size of double : %ld bytes\n", sizeof(double));   //8
    printf("Size of void : %ld bytes\n", sizeof(void));       //1
}