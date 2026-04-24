#include <stdio.h>
#include <string.h>

int check_unique(char *str){

    for (int i = 0; str[i] != '\0'; i++){
        
        for (int j = i+1; str[j] != '\0'; j++){

            if (str[i] == str[j]){
                return 0;  //found duplicates
            }
        }
    }
    return 1;
}

int my_strlen(char *str){
    int count = 0;

    while (*str != '\0'){
        str++;
        count++;
    }
    return count;
}

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void combination(char str[], int start, int end){

    if (start == end){
        printf("%s\n", str);
        return;
    }

    for (int i = start; i<=end; i++){
        swap(&str[start], &str[i]);
        combination(str, start+1, end);
        swap(&str[start], &str[i]);

    }
}


int main(){
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%100[^\n]", str);

    if (!check_unique(str)){
        printf("Error: please enter distinct character.\n");
        return 0;
    }

    n = my_strlen(str);
    printf("string lenght is : %d\n", n);

    printf("All possible combination of given string : ");
    combination(str, 0, n-1);

    return 0;

}