#include <stdio.h>
#include <string.h>

char *my_strtok(char *str, const char *delim){
    
    static int i = 0;
    int j = 0, start;
    start = i;
    static char *ptr;

    if (str != NULL){   //first time onlyy execute
        ptr = str;
    }

    while (ptr[i] != '\0'){

        j = 0;
        while (delim[j] != '\0'){

            if (ptr[i] == delim[j]){
                ptr[i] = '\0';
                i++;
                return &ptr[start];
            }
            else{
                //start = i;
            }
            j++;

        }
        i++;
    }

    if (ptr[start] != '\0')
        return &ptr[start];
    else
        return NULL;

}

int main(){

    char str[] = "Are;:;you:okay";
    char delim[] = ";:";

    char *token = my_strtok(str, delim);
    printf("%s \n", token);

    while (token != NULL){
        token = my_strtok(NULL, delim);
        printf("%s \n", token);
    }

}
