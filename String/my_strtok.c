#include <stdio.h>
#include <string.h>

char *my_strtok(char *str, const char *delim){
    
    static int i = 0;
    int j = 0, start;
    start = i;
    static char *ptr;

    if (str != NULL){   //first time onlyy execute
        ptr = str;
        i=0;
    }

    while (ptr[i] != '\0'){

        j = 0;
        while (delim[j] != '\0'){

            if (ptr[i] == delim[j]){
                ptr[i] = '\0';
                i++;

                
                // Skip multiple delimiters
                while (ptr[i] != '\0')
                {
                    int k = 0, is_delim = 0;

                    while (delim[k] != '\0')
                    {
                        if (ptr[i] == delim[k])
                        {
                            is_delim = 1;
                            break;
                        }
                        k++;
                    }

                    if (!is_delim)
                        break;

                    i++;
                }
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

    while (token != NULL){
        printf("%s \n", token);
        token = my_strtok(NULL, delim);
        
    }

}


// #include <stdio.h>
// #include <string.h>

// char *my_strtok(char *str, const char *delim)
// {
//     static char *ptr;
//     static int i = 0;
//     int j, start;

//     // First call
//     if (str != NULL)
//     {
//         ptr = str;
//         i = 0;
//     }

//     // If end of string reached
//     if (ptr[i] == '\0')
//         return NULL;

//     start = i;

//     while (ptr[i] != '\0')
//     {
//         j = 0;

//         // Check if current char is delimiter
//         while (delim[j] != '\0')
//         {
//             if (ptr[i] == delim[j])
//             {
//                 ptr[i] = '\0';
//                 i++;

//                 // Skip multiple delimiters
//                 while (ptr[i] != '\0')
//                 {
//                     int k = 0, is_delim = 0;

//                     while (delim[k] != '\0')
//                     {
//                         if (ptr[i] == delim[k])
//                         {
//                             is_delim = 1;
//                             break;
//                         }
//                         k++;
//                     }

//                     if (!is_delim)
//                         break;

//                     i++;
//                 }

//                 return &ptr[start];
//             }
//             j++;
//         }
//         i++;
//     }

//     // Last token
//     if (ptr[start] != '\0')
//         return &ptr[start];

//     return NULL;
// }

// int main()
// {
//     char str[] = "Are;you:okay";
//     char delim[] = ";:";

//     char *token = my_strtok(str, delim);

//     while (token != NULL)
//     {
//         printf("%s\n", token);
//         token = my_strtok(NULL, delim);
//     }

//     return 0;
// }
