#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *ptr = malloc(8);

    int c1 = 0, c2 = 0, s = 0, num = 0, d = 0;
    int choice;

    do
    {       
        printf("Menu:\n1.Add element\n2.Remove element\n3.Display element\n4.Exit from the program\n");
        printf("Choice---> ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                int t;
                printf("1.char\n2.short\n3.int\n4.float\n5.double\n");
                printf("Choice---> ");
                scanf("%d", &t);

                switch (t)
                {
                    case 1:
                        if (!c1 && !d)
                        {
                            printf("Enter char1: ");
                            scanf(" %c", (char *)ptr);
                            c1 = 1;
                        }
                        else if (!c2 && !d)
                        {
                            printf("Enter char2: ");
                            scanf(" %c", (char *)ptr + 1);
                            c2 = 1;
                        }
                        else printf("Not allowed\n");
                        break;

                    case 2:
                        if (!s && !d)
                        {
                            printf("Enter short: ");
                            scanf("%hd", (short *)((char *)ptr + 2));
                            s = 1;
                        }
                        else printf("Not allowed\n");
                        break;

                    case 3:
                        if (!num && !d)
                        {
                            printf("Enter int: ");
                            scanf("%d", (int *)((char *)ptr + 4));
                            num = 1;
                        }
                        else printf("Not allowed\n");
                        break;

                    case 4:
                        if (!num && !d)
                        {
                            printf("Enter float: ");
                            scanf("%f", (float *)((char *)ptr + 4));
                            num = 1;
                        }
                        else printf("Not allowed\n");
                        break;

                    case 5:
                        if (!c1 && !c2 && !s && !num && !d)
                        {
                            printf("Enter double: ");
                            scanf("%lf", (double *)ptr);
                            d = 1;
                        }
                        else printf("Memory not empty\n");
                        break;
                }
                break;
            }

            case 2:
            {
                int t;
                printf("1.char1 2.char2 3.short 4.int/float 5.double\n");
                scanf("%d", &t);

                switch (t)
                {
                    case 1:
                        c1 = 0;
                        break;
                    case 2:
                        c2 = 0; 
                        break;
                    case 3: 
                        s = 0; 
                        break;
                    case 4: 
                        num = 0; 
                        break;
                    case 5: 
                        d = 0; 
                        break;
                }

                printf("Deleted\n");
                break;
            }

            case 3:
            {
                printf("\n--- Data ---\n");

                if (d)
                {
                    printf("double : %lf\n", *(double *)ptr);
                }
                else
                {
                    if (c1)
                        printf("char1 : %c\n", *(char *)ptr);

                    if (c2)
                        printf("char2 : %c\n", *((char *)ptr + 1));

                    if (s)
                        printf("short : %hd\n", *(short *)((char *)ptr + 2));

                    if (num)
                    {
                        printf("int : %d\n", *(int *)((char *)ptr + 4));
                        printf("float : %f\n", *(float *)((char *)ptr + 4));
                    }
                }
                break;
            }

            case 4:
                printf("Exit...\n");
                break;

            default:
                printf("Invalid\n");
        }

    } while (choice != 4);

    free(ptr);
}