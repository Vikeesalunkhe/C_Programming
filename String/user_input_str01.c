#include <stdio.h>
#include <string.h>

void main() {

    char name[20];
    printf("Enter Name : ");                  
    scanf("%s", name);                          //vikee

    printf("Name is : %s\n", name);             //vikee
    printf("size : %ld\n", sizeof(name));       // 20
    printf("lenght : %ld\n", strlen(name));     // 5

    char name2[10];
    printf("Enter Name2 : ");                  
    scanf("%s", name2);                          //vik ee

    printf("Name is : %s\n", name2);             //vik
    printf("size : %ld\n", sizeof(name2));       // 20
    printf("lenght : %ld\n", strlen(name2));     // 3
    
}