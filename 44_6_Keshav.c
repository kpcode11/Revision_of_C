#include <stdio.h>
#include <stdlib.h>

struct time
{
    int sec;
    int min;
    int hour;
};

int main()
{

    while (1)
    {
        int ch;

        printf("Operations to perform\n");
        printf("1.Input New Time\n");
        printf("2.Display Time\n");
        printf("3.Update Time\n");
        printf("4.Exit\n");

        printf("Enter your choice: \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            /* code */
            break;

        default:
            printf("Enter proper choice\n");
            break;
        }
    }

    return 0;
}