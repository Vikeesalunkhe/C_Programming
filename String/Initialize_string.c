// initialize string

#include <stdio.h>
#include <string.h>

void main() {

    char name[] = "Vikee";
    printf("name : %s\n", name);              //Vikee
    printf("size : %ld\n", sizeof(name));   //6 byte
    printf("lenght : %ld\n", strlen(name));   //5  
    printf("Address : %p\n", name);    //0x7fffffffda12


    char name2[] = {'V', 'i', 'k', 'e', 'e'};
    printf("name2 : %s\n", name2);              //VikeeVikee        this out ourput extected because %s read untill found space{\0}.
    printf("size : %ld\n", sizeof(name2));   //5 byte
    printf("lenght : %ld\n", strlen(name2));   //10
    printf("Address : %p\n", name2);           //0x7fffffffda0d


    char name3[] = {'V', 'i', 'k', 'e', 'e', '\0'};
    printf("name3 : %s\n", name3);              //VikeeVikee        this out ourput extected because 
    printf("size : %ld\n", sizeof(name3));   //5 byte
    printf("lenght : %ld\n", strlen(name3));   //10
    printf("Address : %p\n", name3);           //0x7fffffffda12

}
